#include "../../RuntimeObjectSystem/ObjectInterfacePerModule.h"

#include "../../RuntimeObjectSystem/IObject.h"
#include "IUpdateable.h"
#include "InterfaceIds.h"
#include <iostream>

class RuntimeObject01 : public IUpdateable {
public:
	virtual void Update(float deltaTime) {
		std::cout << "Runtime Object 012 update called!\n";
	}
};

REGISTERCLASS(RuntimeObject01);
