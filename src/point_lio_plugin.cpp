#include <mrs_uav_state_estimators/estimators/state/state_generic.h>

namespace point_lio
{

const char estimator_name[] = "point_lio";
const bool is_core_plugin = false;

class PointLio : public mrs_uav_state_estimators::StateGeneric {
public:
  PointLio() : mrs_uav_state_estimators::StateGeneric(estimator_name, is_core_plugin) {
  }

  ~PointLio(void) {
  }
};

}  // namespace point_lio

#include <pluginlib/class_list_macros.h>
PLUGINLIB_EXPORT_CLASS(point_lio::PointLio, mrs_uav_managers::StateEstimator)

