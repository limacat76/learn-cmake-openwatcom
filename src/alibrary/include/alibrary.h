#ifndef _alibrary_h_
#define _alibrary_h_

#ifdef __cplusplus
#define C_DECLARE extern "C"
#else
#define C_DECLARE
#endif

#ifdef ALIBRARY_IMPORT
#define ALIBRARY_DLL __declspec(dllimport)
#else 
#define ALIBRARY_DLL __declspec(dllexport)
#endif


C_DECLARE ALIBRARY_DLL int answer_to_the_question();

#endif