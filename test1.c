#include <stdint.h>

static int32_t count1;                 /* "count" has internal linkage             */
static void foo1 ( void )              /* "foo" has internal linkage               */
{
  int16_t count;                      /* Non-compliant - "count" has no linkage
                                       * but clashes with an identifier with
                                       * internal linkage                         */
  int16_t index;                      /* "index" has no linkage                   */
}

void bar1 ( void ) 
{
  static int16_t count;               /* Non-compliant - "count" has no linkage
                                       * but clashes with an identifier with
                                       * internal linkage                         */
  int16_t index;                      /* Compliant - "index" is not unique but
                                       * has no linkage                           */
  foo1 ( ); 
}
