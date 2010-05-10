#include "rr.h"

VALUE rr_define_class(const char *name, VALUE superclass) {
  VALUE V8 = rb_define_module("V8");
  VALUE V8_C = rb_define_module_under(V8, "C");
  return rb_define_class_under(V8_C, name, superclass);
}

VALUE rr_str_to_perl_case(VALUE str) {
  VALUE V8 = rb_define_module("V8");
  VALUE to = rb_define_module_under(V8, "To");
  return rb_funcall(to, rb_intern("perl_case"), 1, str);  
}

VALUE rr_str_to_camel_case(VALUE str) {
  VALUE V8 = rb_define_module("V8");
  VALUE to = rb_define_module_under(V8, "To");
  return rb_funcall(to, rb_intern("camel_case"), 1, str);
}
