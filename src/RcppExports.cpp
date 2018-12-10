// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "modeFinder_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// emp_mode
Rcpp::List emp_mode(std::vector<double> data, Rcpp::Nullable<int> threshold, bool smooth, String smooth_option, Rcpp::Nullable<double> fix_lower, Rcpp::Nullable<double> fix_upper, Rcpp::Nullable<int> m_degree, Rcpp::Nullable<int> m_knots);
RcppExport SEXP _modeFinder_emp_mode(SEXP dataSEXP, SEXP thresholdSEXP, SEXP smoothSEXP, SEXP smooth_optionSEXP, SEXP fix_lowerSEXP, SEXP fix_upperSEXP, SEXP m_degreeSEXP, SEXP m_knotsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< bool >::type smooth(smoothSEXP);
    Rcpp::traits::input_parameter< String >::type smooth_option(smooth_optionSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<double> >::type fix_lower(fix_lowerSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<double> >::type fix_upper(fix_upperSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type m_degree(m_degreeSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type m_knots(m_knotsSEXP);
    rcpp_result_gen = Rcpp::wrap(emp_mode(data, threshold, smooth, smooth_option, fix_lower, fix_upper, m_degree, m_knots));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_modeFinder_emp_mode", (DL_FUNC) &_modeFinder_emp_mode, 8},
    {NULL, NULL, 0}
};

RcppExport void R_init_modeFinder(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
