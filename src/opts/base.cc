#include "opts/base.hh"
#include "opts/all.hh"
#include <stdexcept>

using namespace ccdo;

std::unique_ptr<ExecutionOption> ExecutionOption::get_by_name(std::string name) {

    if (name == "clean")        return std::make_unique<CleanupExecutionOption>();
    // Add more in same format
    throw new std::invalid_argument(name);
}

ExecutionOption::ExecutionOption() {}
