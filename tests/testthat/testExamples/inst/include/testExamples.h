// -*-c++-*-
#ifndef _TESTEXAMPLES_H_
#define _TESTEXAMPLES_H_

// This one I'm including early because it uses a typedef that can't
// be forward declared.
#include <testExamples/stack.hpp>

// Include this early on.  It can be either after classes have been
// define (but before Rcpp has been loaded) or first.  This file will
// attempt to provide declarations for the classes and namespaces that
// you use, but this might be fragile.
#include <testExamples/RcppR6_pre.hpp>

// Anything after this point is OK to include Rcpp.h.  This is
// probably where the meat of the included material goes if your
// classes directly use Rcpp types.  Otherwise you can just declare
// them earlier up.
#include <testExamples/definitions.hpp>

#include <testExamples/simple.hpp>

// This line can safely be the last line in the file, but may go any
// point after RcppR6_pre.hpp is included.
#include <testExamples/RcppR6_post.hpp>

#endif
