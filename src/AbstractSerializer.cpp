#include "AbstractSerializer.h"


namespace ngl
{

  AbstractSerializer::AbstractSerializer(const std::string &_fname, ACCESSMODE _mode) noexcept
  {
     NGL_UNUSED(_fname);
     NGL_UNUSED(_mode);
  }

  AbstractSerializer::~AbstractSerializer() noexcept
  {

  }





}
