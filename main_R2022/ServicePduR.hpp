#pragma once
/******************************************************************************/
/* File   : ServicePduR.hpp                                                          */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstServicePduR.hpp"
#include "CfgServicePduR.hpp"
#include "ServicePduR_core.hpp"
#include "infServicePduR_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ServicePduR:
      INTERFACES_EXPORTED_SERVICEPDUR
      public abstract_module
   ,  public class_ServicePduR_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstServicePduR_Type* lptrConst = (ConstServicePduR_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, SERVICEPDUR_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, SERVICEPDUR_CONST,       SERVICEPDUR_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICEPDUR_CONFIG_DATA, SERVICEPDUR_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SERVICEPDUR_CODE) DeInitFunction (void);
      FUNC(void, SERVICEPDUR_CODE) MainFunction   (void);
      SERVICEPDUR_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_ServicePduR, SERVICEPDUR_VAR) ServicePduR;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

