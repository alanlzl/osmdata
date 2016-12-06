// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_get_lines
Rcpp::S4 rcpp_get_lines(const std::string& st);
RcppExport SEXP osmdata_rcpp_get_lines(SEXP stSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type st(stSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_lines(st));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_polygons
Rcpp::List rcpp_get_polygons(const std::string& st);
RcppExport SEXP osmdata_rcpp_get_polygons(SEXP stSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type st(stSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_polygons(st));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_points
Rcpp::S4 rcpp_get_points(const std::string& st);
RcppExport SEXP osmdata_rcpp_get_points(SEXP stSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type st(stSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_points(st));
    return rcpp_result_gen;
END_RCPP
}
