
#include "utst.h"

void sort( int* x_ptr, int* y_ptr )
{
  if ( (*y_ptr) < (*x_ptr) ) {
    int temp = *x_ptr;
    *x_ptr   = *y_ptr;
    *y_ptr   = temp;
  }
}

int main( void )
{
  int a = 5;
  int b = 9;  
  int c = 6;
  int d = 1;
  sort( &a, &b );
  sort( &c, &d );
  UTST_ASSERT_INT_EQ( a, 5 );
  UTST_ASSERT_INT_EQ( b, 9 );
  UTST_ASSERT_INT_EQ( c,1 );
  UTST_ASSERT_INT_EQ( d,6 );
  return 0;
}
