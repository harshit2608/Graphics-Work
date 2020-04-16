#include "Renderer.h"
#include <cstdlib>

Renderer::Renderer()
{

}

Renderer::~Renderer()
{

}

void Renderer::_InitInstance()
{
	VkInstanceCreateInfo instance_create_info{};
	instance_create_info.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
	auto err = vkCreateInstance(&instance_create_info, nullptr, &_instance);
	if (VK_SUCCESS != err)
	{
		std::exit(-1);
	}
}

void Renderer::_DeInitInstance()
{

}

void Renderer::_InitDevice()
{

}

void Renderer::_DeInitDevice()
{

}
