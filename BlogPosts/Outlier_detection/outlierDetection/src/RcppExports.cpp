// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/outlierDetection.h"
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// grubbs_test_cpp
NumericVector grubbs_test_cpp(NumericVector y, IntegerVector n, double alpha);
static SEXP outlierDetection_grubbs_test_cpp_try(SEXP ySEXP, SEXP nSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(grubbs_test_cpp(y, n, alpha));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP outlierDetection_grubbs_test_cpp(SEXP ySEXP, SEXP nSEXP, SEXP alphaSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(outlierDetection_grubbs_test_cpp_try(ySEXP, nSEXP, alphaSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// sequential_grubbs_test_cpp
IntegerVector sequential_grubbs_test_cpp(NumericVector in_vector, double max_outlier_pct, double alpha);
static SEXP outlierDetection_sequential_grubbs_test_cpp_try(SEXP in_vectorSEXP, SEXP max_outlier_pctSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericVector >::type in_vector(in_vectorSEXP);
    Rcpp::traits::input_parameter< double >::type max_outlier_pct(max_outlier_pctSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(sequential_grubbs_test_cpp(in_vector, max_outlier_pct, alpha));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP outlierDetection_sequential_grubbs_test_cpp(SEXP in_vectorSEXP, SEXP max_outlier_pctSEXP, SEXP alphaSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(outlierDetection_sequential_grubbs_test_cpp_try(in_vectorSEXP, max_outlier_pctSEXP, alphaSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// sequential_grubbs_test_cpp_df
DataFrame sequential_grubbs_test_cpp_df(DataFrame df, std::string var_in, std::string var_out, double max_outlier_pct, double alpha);
static SEXP outlierDetection_sequential_grubbs_test_cpp_df_try(SEXP dfSEXP, SEXP var_inSEXP, SEXP var_outSEXP, SEXP max_outlier_pctSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    Rcpp::traits::input_parameter< std::string >::type var_in(var_inSEXP);
    Rcpp::traits::input_parameter< std::string >::type var_out(var_outSEXP);
    Rcpp::traits::input_parameter< double >::type max_outlier_pct(max_outlier_pctSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(sequential_grubbs_test_cpp_df(df, var_in, var_out, max_outlier_pct, alpha));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP outlierDetection_sequential_grubbs_test_cpp_df(SEXP dfSEXP, SEXP var_inSEXP, SEXP var_outSEXP, SEXP max_outlier_pctSEXP, SEXP alphaSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(outlierDetection_sequential_grubbs_test_cpp_df_try(dfSEXP, var_inSEXP, var_outSEXP, max_outlier_pctSEXP, alphaSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}

// validate (ensure exported C++ functions exist before calling them)
static int outlierDetection_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("NumericVector(*grubbs_test_cpp)(NumericVector,IntegerVector,double)");
        signatures.insert("IntegerVector(*sequential_grubbs_test_cpp)(NumericVector,double,double)");
        signatures.insert("DataFrame(*sequential_grubbs_test_cpp_df)(DataFrame,std::string,std::string,double,double)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP outlierDetection_RcppExport_registerCCallable() { 
    R_RegisterCCallable("outlierDetection", "outlierDetection_grubbs_test_cpp", (DL_FUNC)outlierDetection_grubbs_test_cpp_try);
    R_RegisterCCallable("outlierDetection", "outlierDetection_sequential_grubbs_test_cpp", (DL_FUNC)outlierDetection_sequential_grubbs_test_cpp_try);
    R_RegisterCCallable("outlierDetection", "outlierDetection_sequential_grubbs_test_cpp_df", (DL_FUNC)outlierDetection_sequential_grubbs_test_cpp_df_try);
    R_RegisterCCallable("outlierDetection", "outlierDetection_RcppExport_validate", (DL_FUNC)outlierDetection_RcppExport_validate);
    return R_NilValue;
}
