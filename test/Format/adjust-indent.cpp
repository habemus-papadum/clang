// RUN: grep -Ev "// *[A-Z-]+:" %s | clang-format -lines=2:2 -style=LLVM \
// RUN:   | FileCheck -strict-whitespace %s

void  f() {
// CHECK: void f() {
int i;
// CHECK: {{^  int\ i;}}
 int j;
// CHECK: {{^  int\ j;}}
}
