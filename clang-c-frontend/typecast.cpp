/*
 * typecast.cpp
 *
 *  Created on: Sep 11, 2015
 *      Author: mramalho
 */

#include "typecast.h"

#include <simplify_expr_class.h>
#include <c_types.h>

#include <ansi-c/c_typecast.h>

void gen_typecast(namespacet ns, exprt &dest, typet type)
{
  c_typecastt c_typecast(ns);
  c_typecast.implicit_typecast(dest, type);
}

void gen_typecast_bool(namespacet ns, exprt& dest)
{
  gen_typecast(ns, dest, bool_type());
}

void gen_typecast_arithmetic(namespacet ns, exprt& expr1, exprt& expr2)
{
  c_typecastt c_typecast(ns);
  c_typecast.implicit_typecast_arithmetic(expr1, expr2);
}

void gen_typecast_arithmetic(namespacet ns, exprt& expr)
{
  c_typecastt c_typecast(ns);
  c_typecast.implicit_typecast_arithmetic(expr);
}
