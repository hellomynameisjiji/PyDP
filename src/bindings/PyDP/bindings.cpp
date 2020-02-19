#include <string>

#include "pybind11/embed.h"
#include "differential_privacy/base/status.h"
#include "differential_privacy/base/statusor.h"

using namespace std;

namespace py = pybind11;

void init_base_statusor(py::module &);
void init_base_status(py::module &);

PYBIND11_MODULE(PyDP, m) {

    m.doc() = "Google Differential Privacy python extension";

    init_base_status(m);
    init_base_statusor(m);

}
