# Version 1.0.0 RC2

New features:

* Use dynamic linker semantics when loading multiple bitcode files.
* Support ELF files with embedded LLVM bitcode.
* Pointers to bitcode functions can now be called from other languages.

New polyglot builtins:

* `polyglot_eval_file`
* `polyglot_java_type`
* `polyglot_remove_member`
* `polyglot_remove_array_element`
* `polyglot_can_instantiate`
* `polyglot_new_instance`

Improvements:

* Support polyglot values in all pointer operations.

# Version 1.0.0 RC1

New features:

* New API for conversion of user-defined native structs from and to polyglot
  values.

# Version 0.33

New features:

* Support for bitcode of LLVM version 6.0.
* New API for accessing polyglot values from C (`polyglot.h`).

Changes:

* The `libc++` dependency is now optional and only required for running C++
  code. `libc++abi` is no longer required.
