#include "et/et.h"

#include "test_deps.h"

TEST_GROUP("C++ GameMath") {
#define INSIDE_TEST_GROUP

  // clang-format: off
#include "fix16_t/abs.h"
#include "fix16_t/add.h"
#include "fix16_t/add_negate.h"
#include "fix16_t/multiply.h"
#include "fix16_t/multiply_negate.h"
#include "fix16_t/sub.h"
#include "fix16_t/unary1.h"
#include "fix16_t/unary2.h"

#include "angle_t/deg_conv1.h"
#include "angle_t/deg_conv2.h"
#include "angle_t/deg_conv3.h"
#include "angle_t/deg_conv4.h"
#include "angle_t/deg_conv5.h"
#include "angle_t/unary.h"
#include "angle_t/div_90_by_2.h"
#include "angle_t/div_180_by_2.h"
#include "angle_t/negative_div_by_2.h"
#include "angle_t/cos_0.0_deg.h"
#include "angle_t/cos_45.0_deg.h"
#include "angle_t/cos_90.0_deg.h"
#include "angle_t/cos_135.0_deg.h"
#include "angle_t/cos_180.0_deg.h"
#include "angle_t/cos_270.0_deg.h"
#include "angle_t/cos_360.0_deg.h"

#include "fix16_quat_t/euler_conv1.h"
#include "fix16_quat_t/euler_conv2.h"
#include "fix16_quat_t/euler_conv3.h"
#include "fix16_quat_t/euler_conv4.h"
#include "fix16_quat_t/euler_conv5.h"
#include "fix16_quat_t/euler_conv6.h"
#include "fix16_quat_t/euler_conv7.h"
#include "fix16_quat_t/euler_conv8.h"
#include "fix16_quat_t/euler_conv9.h"
#include "fix16_quat_t/euler_conv10.h"
#include "fix16_quat_t/euler_conv11.h"
#include "fix16_quat_t/euler_conv12.h"
#include "fix16_quat_t/euler_conv13.h"
#include "fix16_quat_t/euler_conv14.h"
#include "fix16_quat_t/euler_conv15.h"
#include "fix16_quat_t/euler_conv16.h"
#include "fix16_quat_t/euler_conv17.h"
#include "fix16_quat_t/euler_conv18.h"
#include "fix16_quat_t/euler_conv19.h"
#include "fix16_quat_t/euler_conv20.h"
#include "fix16_quat_t/euler_conv21.h"
#include "fix16_quat_t/euler_conv22.h"
#include "fix16_quat_t/euler_conv23.h"
#include "fix16_quat_t/euler_conv24.h"
#include "fix16_quat_t/vec3_mult.h"
  // clang-format: on

#undef INSIDE_TEST_GROUP
}
