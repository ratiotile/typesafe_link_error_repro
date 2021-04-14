#ifndef INCLUDED_CODEANALYSIS_WARNINGS
  #define INCLUDED_CODEANALYSIS_WARNINGS
  #include <codeanalysis\warnings.h>
#endif // !INCLUDED_CODEANALYSIS_WARNINGS

#ifndef DOCTEST_LIBRARY_INCLUDED
  // disable warnings for libraries
  #pragma warning(push, 0) 
  #pragma warning ( disable : ALL_CODE_ANALYSIS_WARNINGS )
  #include "doctest/doctest.h"
  #pragma warning(pop)
#endif // !DOCTEST_LIBRARY_INCLUDED
