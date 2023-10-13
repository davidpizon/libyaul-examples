#include "../test_harness.h"

TEST("fix16_quat_t::euler_conv8") {
  constexpr angle_t heading  = -90.0_deg;
  constexpr angle_t attitude = 90.0_deg;
  constexpr angle_t bank     = 0.0_deg;

  const fix16_quat_t a1 = fix16_quat_t::from_euler({bank, heading, attitude});

  VERIFY(a1.w.is_near(0.5_fp));
  VERIFY(a1.comp.x.is_near(-0.5_fp));
  VERIFY(a1.comp.y.is_near(-0.5_fp));
  VERIFY(a1.comp.z.is_near(0.5_fp));
}
