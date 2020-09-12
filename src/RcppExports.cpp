// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// projectionDepth
void projectionDepth(const NumericMatrix& dts, const NumericMatrix& dt, const NumericMatrix& directions, const int& m, const int& n, const int& d, const int& k, NumericVector& depths);
RcppExport SEXP _fdalite_projectionDepth(SEXP dtsSEXP, SEXP dtSEXP, SEXP directionsSEXP, SEXP mSEXP, SEXP nSEXP, SEXP dSEXP, SEXP kSEXP, SEXP depthsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type dts(dtsSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type dt(dtSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type directions(directionsSEXP);
    Rcpp::traits::input_parameter< const int& >::type m(mSEXP);
    Rcpp::traits::input_parameter< const int& >::type n(nSEXP);
    Rcpp::traits::input_parameter< const int& >::type d(dSEXP);
    Rcpp::traits::input_parameter< const int& >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type depths(depthsSEXP);
    projectionDepth(dts, dt, directions, m, n, d, k, depths);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_fdalite_projectionDepth", (DL_FUNC) &_fdalite_projectionDepth, 8},
    {NULL, NULL, 0}
};

RcppExport void R_init_fdalite(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}