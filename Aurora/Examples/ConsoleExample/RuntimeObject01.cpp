#include "../../RuntimeObjectSystem/ObjectInterfacePerModule.h"

#include "../../RuntimeObjectSystem/IObject.h"
#include "IUpdateable.h"
#include "InterfaceIds.h"
#include <iostream>


//class RuntimeObject02 : public TInterface<IID_IUPDATEABLE,IUpdateable>
//{
//public:
//	virtual void Update( float deltaTime )
//	{
//		std::cout << "Runtime Object 01 update calledHI!\n";
//	}
//};

class RuntimeObject01 : public TInterface<IID_IUPDATEABLE,IUpdateable>
{
public:
	virtual void Update( float deltaTime )
	{
		std::cout << "Runtime Object 123 update called!\n";
	}
};

REGISTERCLASS(RuntimeObject01);
//REGISTERCLASS(RuntimeObject02);
