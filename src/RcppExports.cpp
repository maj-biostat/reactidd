// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif


RcppExport SEXP _rcpp_module_boot_stan_fit4b_splines_actual_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4b_splines_actual_phe_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4b_splines_actual_weighted_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4b_splines_actual_weighted_incidence_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4b_splines_actual_weighted_two_variants_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4linear_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4linear_phe_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4linear_weighted_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4shedding_exp_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4shedding_exp_tdelay_mod();

static const R_CallMethodDef CallEntries[] = {
    {"_rcpp_module_boot_stan_fit4b_splines_actual_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4b_splines_actual_mod, 0},
    {"_rcpp_module_boot_stan_fit4b_splines_actual_phe_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4b_splines_actual_phe_mod, 0},
    {"_rcpp_module_boot_stan_fit4b_splines_actual_weighted_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4b_splines_actual_weighted_mod, 0},
    {"_rcpp_module_boot_stan_fit4b_splines_actual_weighted_incidence_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4b_splines_actual_weighted_incidence_mod, 0},
    {"_rcpp_module_boot_stan_fit4b_splines_actual_weighted_two_variants_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4b_splines_actual_weighted_two_variants_mod, 0},
    {"_rcpp_module_boot_stan_fit4linear_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4linear_mod, 0},
    {"_rcpp_module_boot_stan_fit4linear_phe_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4linear_phe_mod, 0},
    {"_rcpp_module_boot_stan_fit4linear_weighted_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4linear_weighted_mod, 0},
    {"_rcpp_module_boot_stan_fit4shedding_exp_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4shedding_exp_mod, 0},
    {"_rcpp_module_boot_stan_fit4shedding_exp_tdelay_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4shedding_exp_tdelay_mod, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_reactidd(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
