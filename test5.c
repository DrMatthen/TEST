#include <stdint.h>

static int32_t count;                 /* "count" has internal linkage             */
static void foo5 ( void )              /* "foo" has internal linkage               */
{
  int16_t count;                      /* Non-compliant - "count" has no linkage
                                       * but clashes with an identifier with
                                       * internal linkage                         */
  int16_t index;                      /* "index" has no linkage                   */
}

void bar5 ( void ) 
{
  static int16_t count;               /* Non-compliant - "count" has no linkage
                                       * but clashes with an identifier with
                                       * internal linkage                         */
  int16_t index;                      /* Compliant - "index" is not unique but
                                       * has no linkage                           */
  foo5 ( ); 
}
