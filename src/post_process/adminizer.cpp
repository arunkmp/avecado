#include "post_process/adminizer.hpp"

namespace avecado {
namespace post_process {

/**
 * Post-process that applies administrative region attribution
 * to features, based on geographic location of the geometry.
 */
class adminizer : public izer {
public:
  adminizer() {}
  virtual ~adminizer() {}

  virtual void process(mapnik::vector::tile_layer & layer) const;
};

void adminizer::process(mapnik::vector::tile_layer & layer) const {
  // TODO: adminize!
}

izer_ptr create_adminizer(pt::ptree const& config) {
  return std::make_shared<adminizer>();
}

} // namespace post_process
} // namespace avecado
