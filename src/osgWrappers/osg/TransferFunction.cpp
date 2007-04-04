// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/Image>
#include <osg/Shader>
#include <osg/Texture>
#include <osg/TransferFunction>
#include <osg/Vec4>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osg::TransferFunction)
	I_BaseType(osg::Referenced);
	I_Constructor0(____TransferFunction,
	               "",
	               "");
	I_Method0(osg::Image *, getImage,
	          Properties::NON_VIRTUAL,
	          __osg_Image_P1__getImage,
	          "",
	          "");
	I_Method0(const osg::Image *, getImage,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Image_P1__getImage,
	          "",
	          "");
	I_Method0(osg::Texture *, getTexture,
	          Properties::NON_VIRTUAL,
	          __osg_Texture_P1__getTexture,
	          "",
	          "");
	I_Method0(const osg::Texture *, getTexture,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Texture_P1__getTexture,
	          "",
	          "");
	I_Method0(osg::Shader *, getShader,
	          Properties::NON_VIRTUAL,
	          __osg_Shader_P1__getShader,
	          "",
	          "");
	I_Method0(const osg::Shader *, getShader,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Shader_P1__getShader,
	          "",
	          "");
	I_SimpleProperty(osg::Image *, Image, 
	                 __osg_Image_P1__getImage, 
	                 0);
	I_SimpleProperty(osg::Shader *, Shader, 
	                 __osg_Shader_P1__getShader, 
	                 0);
	I_SimpleProperty(osg::Texture *, Texture, 
	                 __osg_Texture_P1__getTexture, 
	                 0);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::TransferFunction1D)
	I_BaseType(osg::TransferFunction);
	I_Constructor0(____TransferFunction1D,
	               "",
	               "");
	I_Method2(void, setInputRange, IN, float, minimum, IN, float, maximum,
	          Properties::NON_VIRTUAL,
	          __void__setInputRange__float__float,
	          "",
	          "");
	I_Method1(void, setMinimum, IN, float, value,
	          Properties::NON_VIRTUAL,
	          __void__setMinimum__float,
	          "",
	          "");
	I_Method0(float, getMinimum,
	          Properties::NON_VIRTUAL,
	          __float__getMinimum,
	          "",
	          "");
	I_Method1(void, setMaximum, IN, float, value,
	          Properties::NON_VIRTUAL,
	          __void__setMaximum__float,
	          "",
	          "");
	I_Method0(float, getMaximum,
	          Properties::NON_VIRTUAL,
	          __float__getMaximum,
	          "",
	          "");
	I_Method1(void, allocate, IN, unsigned int, numX,
	          Properties::NON_VIRTUAL,
	          __void__allocate__unsigned_int,
	          "",
	          "");
	I_MethodWithDefaults1(void, clear, IN, const osg::Vec4 &, color, osg::Vec4(1.0f, 1.0f, 1.0f, 1.0f),
	                      Properties::NON_VIRTUAL,
	                      __void__clear__C5_osg_Vec4_R1,
	                      "",
	                      "");
	I_Method0(unsigned int, getNumberCellsX,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getNumberCellsX,
	          "",
	          "");
	I_Method2(void, setValue, IN, unsigned int, i, IN, const osg::Vec4 &, color,
	          Properties::NON_VIRTUAL,
	          __void__setValue__unsigned_int__C5_osg_Vec4_R1,
	          "",
	          "");
	I_Method1(const osg::Vec4 &, getValue, IN, unsigned int, i,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Vec4_R1__getValue__unsigned_int,
	          "",
	          "");
	I_SimpleProperty(float, Maximum, 
	                 __float__getMaximum, 
	                 __void__setMaximum__float);
	I_SimpleProperty(float, Minimum, 
	                 __float__getMinimum, 
	                 __void__setMinimum__float);
	I_SimpleProperty(unsigned int, NumberCellsX, 
	                 __unsigned_int__getNumberCellsX, 
	                 0);
	I_IndexedProperty(const osg::Vec4 &, Value, 
	                  __C5_osg_Vec4_R1__getValue__unsigned_int, 
	                  __void__setValue__unsigned_int__C5_osg_Vec4_R1, 
	                  0);
END_REFLECTOR

