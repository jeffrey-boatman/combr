// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// priortree
List priortree(NumericVector cut_lens, double alpha, double beta);
RcppExport SEXP _borrowr_priortree(SEXP cut_lensSEXP, SEXP alphaSEXP, SEXP betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type cut_lens(cut_lensSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    rcpp_result_gen = Rcpp::wrap(priortree(cut_lens, alpha, beta));
    return rcpp_result_gen;
END_RCPP
}
// matchesToCor
List matchesToCor(NumericMatrix x);
RcppExport SEXP _borrowr_matchesToCor(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(matchesToCor(x));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP cwbart(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_borrowr_priortree", (DL_FUNC) &_borrowr_priortree, 3},
    {"_borrowr_matchesToCor", (DL_FUNC) &_borrowr_matchesToCor, 1},
    {"cwbart", (DL_FUNC) &cwbart, 31},
    {NULL, NULL, 0}
};

RcppExport void R_init_borrowr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
