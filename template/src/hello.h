/**
 * File:   hello.h
 * Author: AWTK Develop Team
 * Brief:  hello
 *
 * Copyright (c) 2018 - 2022  Guangzhou ZHIYUAN Electronics Co.,Ltd.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * License file for more details.
 *
 */

/**
 * History:
 * ================================================================
 * 2020-12-07 AUTHOR created
 *
 */

#ifndef TK_HELLO_H
#define TK_HELLO_H

#include "tkc.h"

BEGIN_C_DECLS

/**
 * @class hello_t
 * @annotation ["fake"]
 * 
 * hello
 */

/**
 * @method hello
 *
 * 求参数a和b的和。
 *
 * @param {int} a 参数a
 * @param {int} b 参数b
 *
 *
 * @return {int} 返回参数a和b的和。
 */
int hello(int a, int b);

END_C_DECLS

#endif /*TK_HELLO_H*/
