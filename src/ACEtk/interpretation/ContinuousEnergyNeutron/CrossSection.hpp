class CrossSection {

  Slice energyGrid_;
  Slice values_;

public:
  #include "ACEtk/interpretation/ContinuousEnergyNeutron/CrossSection/src/ctor.hpp"

  auto energyGrid() const {
    return scaleBy( 1.0 * mega( electronVolts ) )( this->energyGrid_ );
  }

  auto values() const {
    return scaleBy( barn )( this->values_ );
  }
};
