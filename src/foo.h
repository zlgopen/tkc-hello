/**
 * File:   foo.h
 * Author: AWTK Develop Team
 * Brief:  foo
 *
 * Copyright (c) 2018 - 2020  Guangzhou ZHIYUAN Electronics Co.,Ltd.
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
 * 2020-12-07 Li XianJing <xianjimli@hotmail.com> created
 *
 */

#ifndef TK_FOO_H
#define TK_FOO_H

#include "tkc/types_def.h"

BEGIN_C_DECLS

/**
 * @class foo_t
 * @annotation ["fake"]
 * 
 * foo
 */

/**
 * @method foo
 *
 * 求参数a和b的和。
 *
 * @param {int} a 参数a
 * @param {int} b 参数b
 *
 *
 * @return {int} 返回参数a和b的和。
 */
int foo(int a, int b);

END_C_DECLS

#endif /*TK_FOO_H*/
