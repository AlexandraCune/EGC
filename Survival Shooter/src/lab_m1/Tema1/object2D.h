#pragma once

#include <string>

#include "core/gpu/mesh.h"
#include "utils/glm_utils.h"


namespace object2D_new
{

	Mesh* CreateSquare(const std::string& name, glm::vec3 leftBottomCorner, float lengthX, float lengthY, glm::vec3 color, bool fill = false);

	Mesh* CreateCircle(const std::string& name, glm::vec3 leftBottomCorner, float angle, glm::vec3 color, int fragments, bool fill);
}
