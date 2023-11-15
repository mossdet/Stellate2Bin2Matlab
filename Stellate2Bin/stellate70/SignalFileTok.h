//
//  TITLE:    SignalFileTok.h
//  AUTHOR:   Greg Rishea
//  DATE:     1999.05.03
//  SUMMARY:  General-purpose string tokenizing class.
//
//  UPDATES:  
//

#ifndef __SIGNALFILETOK_H_
#define __SIGNALFILETOK_H_

#include <string>

using namespace std;

template<class E> 
class CBasicTokenStr : public basic_string<E>
{
  public:
  CBasicTokenStr(const E* pcezSep = m_pcezDefSep);
  CBasicTokenStr(const basic_string<E>& strIn, const E* pcezSep = m_pcezDefSep);
  bool Clear();
  bool First(basic_string<E>& strToken, int iToken = 0);
  bool Next(basic_string<E>& strToken);
  const basic_string<E>& operator=(const E* pcezIn);
  const basic_string<E>& operator=(const basic_string<E>& strIn);
  protected:
  bool Init();
  bool RePos(); 
  bool IsSpace(const E& e);
  bool IsSeparator(const E& e);
  typename basic_string::size_type Find(size_type stStartPos = 0);
  size_type m_stLen;
  size_type m_stCurrPos;
  size_type m_stNextPos; 
  basic_string<E> m_strSep;
  static const E* m_pcezDefSep;
};

// Narrow character specializations:
template<> const char* CBasicTokenStr<char>::m_pcezDefSep = " ,;";
typedef CBasicTokenStr<char> CTokenStr;

// Wide character specializations:
template<> const wchar_t* CBasicTokenStr<wchar_t>::m_pcezDefSep = L" ,;";
typedef CBasicTokenStr<wchar_t> CTokenWStr;

#ifdef _UNICODE
typedef CTokenWStr CTokenTStr;
#else
typedef CTokenStr CTokenTStr;
#endif

template<class E>
CBasicTokenStr<E>::CBasicTokenStr(const E* pcezSep /*= m_pcezDefSep*/)
{ 
  if (pcezSep != NULL) m_strSep = pcezSep;
  Init();
}

template<class E>
CBasicTokenStr<E>::CBasicTokenStr(const basic_string<E>& strIn, const E* pcezSep /*= m_pcezDefSep*/)
  : basic_string<E>(strIn) 
{ 
  if (pcezSep != NULL) m_strSep = pcezSep;
  Init();
}

template<class E>
bool CBasicTokenStr<E>::Clear()
{
  erase();
  return Init();
}

template<class E>
bool CBasicTokenStr<E>::First(basic_string<E>& strToken, int iToken /*= 0*/)
{
  strToken.erase();
  if (iToken < 0) return false;
  m_stCurrPos = m_stNextPos = 0; 
  int iTokenCnt = 0;
  while (iTokenCnt < iToken) 
  {
    if (!RePos()) return false;
    ++iTokenCnt;
  }
  return Next(strToken);
}

template<class E>
bool CBasicTokenStr<E>::Next(basic_string<E>& strToken)
{
  strToken.erase();
  if (!RePos()) return false;
  size_type stNextPos = (m_stNextPos != npos ? m_stNextPos : m_stLen); 
  strToken = substr(m_stCurrPos, stNextPos - m_stCurrPos);
  return !strToken.empty();
}

template<class E>
const basic_string<E>& CBasicTokenStr<E>::operator=(const E* pcezIn)
{
  basic_string<E>::operator=(pcezIn);
  Init();
  return *this;
}

template<class E>
const basic_string<E>& CBasicTokenStr<E>::operator=(const basic_string<E>& strIn)
{
  basic_string<E>::operator=(strIn);
  Init();
  return *this;
}

template<class E>
bool CBasicTokenStr<E>::Init() 
{ 
  m_stLen = length(); 
  m_stCurrPos = m_stNextPos = npos; 
  return true;
}

template<class E>
bool CBasicTokenStr<E>::RePos()
{
  m_stCurrPos = m_stNextPos;
  while (true)
  {  
    if (!(m_stCurrPos < m_stLen)) return false;
    const E& e = (*this)[m_stCurrPos];
    if (!(IsSpace(e) || IsSeparator(e))) break;
    ++m_stCurrPos;
  }
  m_stNextPos = Find(m_stCurrPos);
  return true;
}

template<class E>
bool CBasicTokenStr<E>::IsSpace(const E& e) 
{
  if (typeid(e) == typeid(char))
    return (isspace((unsigned char)e) != 0);
  else
  if (typeid(e) == typeid(wchar_t))
    return (iswspace(e) != 0);

  return false; 
}

template<class E>
bool CBasicTokenStr<E>::IsSeparator(const E& e) 
{ 
  const E* pcezSep = m_strSep.c_str();
  while (*pcezSep != E(0)) 
  {
    if (*pcezSep == e) return true;
    ++pcezSep;
  }
  return false;
}

template<class E>
typename basic_string<E>::size_type CBasicTokenStr<E>::Find(size_type stStartPos /*= 0*/)
{
  const E* pcezSep = m_strSep.c_str();
  size_type stPos = npos; 
  while (*pcezSep != E(0)) 
  {
    stPos = find(*pcezSep, stStartPos);
    if (stPos != npos) break;
    ++pcezSep;
  }
  return stPos;
}

template<class E>
const E* CBasicTokenStr<E>::m_pcezDefSep = NULL;

#endif // !__SIGNALFILETOK_H_
