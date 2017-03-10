/**
 * @file   A.cpp
 * @Author Me (me@example.com)
 * @date   September, 2016
 * @brief  Brief description of file.
 *
 * Detailed description of file.
 */

#include "Letters/A.hpp"

/**
 * @name    Example API Actions
 * @brief   Example actions available.
 * @ingroup example
 *
 * This API provides certain actions as an example.
 *
 * @param [in] repeat  Number of times to do nothing.
 *
 * @retval TRUE   Successfully did nothing.
 * @retval FALSE  Oops, did something.
 *
 * Example Usage:
 * @code
 *    example_nada(3); // Do nothing 3 times.
 * @endcode
 */
A::A(void)
{
	cout<<"Class A Constructor"<<endl;
}


/**
 * @brief
 *
 * @param 
 *
 * @return
 */
A::~A(void)
{
	cout<<"Class A Destructor"<<endl;
}

/**
 * @brief
 *
 * @param 
 *
 * @return
 */
int A::DoSomethingComplex()
{
  return a_*=a_;
}
