#pragma once
namespace cmd {
// Logic self test used by `AegisCommand --selftest`; returns the number of failed checks.
int runSelfTest();
}
