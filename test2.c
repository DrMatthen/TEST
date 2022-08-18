
#include <stdint.h>
/* file2.c */ 
static int8_t count1;                  /* Non-compliant - "count" has internal
                                       * linkage but clashes with other
                                       * identifiers of the same name             */
static void foo2 ( void )              /* Non-compliant - "foo" has internal
                                       * linkage but clashes with a function of
                                       * the same name                            */
{
  int32_t index;                      /* Compliant - both "index" and "nbytes"    */
  int16_t nbytes;                     /* are not unique but have no linkage       */
}
void bar2 ( void ) 
{
  static uint8_t nbytes;              /* Compliant - "nbytes" is not unique but
                                       * has no linkage and the storage class is
                                       * irrelevant                               */
}

