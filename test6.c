
#include <stdint.h>
/* file2.c */ 



static int8_t count;                  /* Non-compliant - "count" has internal
                                       * linkage but clashes with other
                                       * identifiers of the same name             */
static void foo6 ( void )              /* Non-compliant - "foo" has internal
                                       * linkage but clashes with a function of
                                       * the same name                            */
{
  int32_t index;                      /* Compliant - both "index" and "nbytes"    */
  int16_t nbytes;                     /* are not unique but have no linkage       */
}
void bar6 ( void ) 
{
  static uint8_t nbytes;              /* Compliant - "nbytes" is not unique but
                                       * has no linkage and the storage class is
                                       * irrelevant                               */
}

void badasbing( void )
{
	static uint32_t data;
};

