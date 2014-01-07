#ifndef MCSF_ALGO_STEP_BASE_H_
#define MCSF_ALGO_STEP_BASE_H_
 
#include <exception>
#include "mcsf_vr_algorithm_config.h"
 
MCSF_MED_VIEWER_3D_BEGIN_INNER_NAMESPACE // begin namespace

/// \class AlgoStepBase
/// 
/// \brief *****
class AlgoStepBase
{
public:
    //the constructor and destructor
    Mcsf_VR_Algorithm_Export 
        AlgoStepBase();
    Mcsf_VR_Algorithm_Export 
        virtual ~AlgoStepBase();

    Mcsf_VR_Algorithm_Export
        virtual void SetUniformValue() { };

    Mcsf_VR_Algorithm_Export
        virtual void GetShaderText(char* &pShaderTextPtr, unsigned int& uiShaderType) = 0;

    Mcsf_VR_Algorithm_Export
        virtual void GetShaderParamUniformID() {}

protected:
    Mcsf_VR_Algorithm_Export
        void ReadShaderText_i(char* sShaderPath);

    char* m_pShaderTextPtr;
};
 
MCSF_MED_VIEWER_3D_END_INNER_NAMESPACE // end namespace
 
#endif
