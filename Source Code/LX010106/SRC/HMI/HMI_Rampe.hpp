/******************************************************************************/
/*                                                                            */
/* Project N�  :  RB0505                                                      */
/*                                                                            */
/*----------------------------------------------------------------------------*/
/*                                                                            */
/* Filename  : HMI_Rampe.hpp 									 		 			  	  	  	*/
/*                              	                                             */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/


/******************************************************************************/
/*%C                     Functionnal description :                            */
/*%C																		  							*/
/*%C Classe declaration for HMI_Rampe.cpp		  		 							     	*/
/*%C			                                                                  */
/******************************************************************************/

#ifndef RampeH
#define RampeH
							

/******************************************************************************/
/*                           	INCLUDE                    	      			  	*/
/******************************************************************************/

#include "HMI_LabelSymbol.hpp"

/******************************************************************************/
/*                           CONSTANT DECLARATION                    	      */
/******************************************************************************/

class Rampe: public LabelSymbol
{

private:

   /* Parametres */ 

   /* Methodes */

protected:

   /* Parametres */ 

   /* Methodes */

public:

   /* Parametres */ 

   /* Methodes */

   Rampe();

   virtual e_SYMBOL IntToSymbol(UWORD16 Val);
   
   virtual UWORD16 SymbolToInt();
   virtual UBYTE* GetStringValue1();   

};

#endif
