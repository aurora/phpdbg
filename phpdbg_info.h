/*
   +----------------------------------------------------------------------+
   | PHP Version 5                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) 1997-2013 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Authors: Felipe Pena <felipe@php.net>                                |
   | Authors: Joe Watkins <joe.watkins@live.co.uk>                        |
   +----------------------------------------------------------------------+
*/

#ifndef PHPDBG_INFO_H
#define PHPDBG_INFO_H

#include "phpdbg_cmd.h"

#define PHPDBG_INFO(name) PHPDBG_COMMAND(info_##name)

PHPDBG_INFO(files);
PHPDBG_INFO(classes);
PHPDBG_INFO(funcs);
PHPDBG_INFO(error);
PHPDBG_INFO(vars);

static const phpdbg_command_t phpdbg_info_commands[] = {
    PHPDBG_COMMAND_D_EX(files,   "lists included files",  'F', info_files,   NULL, 0),
    PHPDBG_COMMAND_D_EX(classes, "lists loaded classes",  'c', info_classes, NULL, 0),
    PHPDBG_COMMAND_D_EX(funcs,   "lists loaded classes",  'f', info_funcs,   NULL, 0),
    PHPDBG_COMMAND_D_EX(error,   "show the last error",   'e', info_error,   NULL, 0),
    PHPDBG_COMMAND_D_EX(vars,    "show active variables", 'v', info_vars,    NULL, 0),
    PHPDBG_END_COMMAND
};

#endif /* PHPDBG_INFO_H */
