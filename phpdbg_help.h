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

#ifndef PHPDBG_HELP_H
#define PHPDBG_HELP_H

/**
 * Command Declarators
 */
#define PHPDBG_HELP_D(name, tip) \
  {PHPDBG_STRL(#name), tip, sizeof(tip)-1, phpdbg_do_help_##name}
#define PHPDBG_HELP(name) \
  int phpdbg_do_help_##name(const char *expr, size_t expr_len TSRMLS_DC)

/**
 * Helper Forward Declarations
 */
PHPDBG_HELP(exec);
PHPDBG_HELP(print);
PHPDBG_HELP(brake);

/**
 * Commands
 */
static const phpdbg_command_t phpdbg_help_commands[] = {
  PHPDBG_HELP_D(exec,  "the execution context should be a valid phpdbg path"),
  PHPDBG_HELP_D(print, "printing allows inspection of the execution environment"),
  PHPDBG_HELP_D(brake, "brake points allow execution interruption"),
  {NULL, 0, 0}
};

#endif /* PHPDBG_HELP_H */