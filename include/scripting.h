#ifndef __OCTO_SCRIPTING_H__
#define __OCTO_SCRIPTING_H__

#include <wchar.h>

int scripting_init(wchar_t * program_name);
void scripting_shutdown(void);

int scripting_load(const wchar_t * module);
int scripting_load_dir(const wchar_t * path);

#endif

