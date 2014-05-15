// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// slice_sample_gamma
double slice_sample_gamma(double alpha, double beta, double lower, double upper);
RcppExport SEXP BTYDplus_slice_sample_gamma(SEXP alphaSEXP, SEXP betaSEXP, SEXP lowerSEXP, SEXP upperSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP );
        Rcpp::traits::input_parameter< double >::type beta(betaSEXP );
        Rcpp::traits::input_parameter< double >::type lower(lowerSEXP );
        Rcpp::traits::input_parameter< double >::type upper(upperSEXP );
        double __result = slice_sample_gamma(alpha, beta, lower, upper);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// slice_sample_ma_liu
NumericVector slice_sample_ma_liu(String what, NumericVector x, NumericVector tx, NumericVector Tcal, NumericVector lambda, NumericVector mu, double r, double alpha, double s, double beta);
RcppExport SEXP BTYDplus_slice_sample_ma_liu(SEXP whatSEXP, SEXP xSEXP, SEXP txSEXP, SEXP TcalSEXP, SEXP lambdaSEXP, SEXP muSEXP, SEXP rSEXP, SEXP alphaSEXP, SEXP sSEXP, SEXP betaSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< String >::type what(whatSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type tx(txSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type Tcal(TcalSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP );
        Rcpp::traits::input_parameter< double >::type r(rSEXP );
        Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP );
        Rcpp::traits::input_parameter< double >::type s(sSEXP );
        Rcpp::traits::input_parameter< double >::type beta(betaSEXP );
        NumericVector __result = slice_sample_ma_liu(what, x, tx, Tcal, lambda, mu, r, alpha, s, beta);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// pcnbd_palive
NumericVector pcnbd_palive(NumericVector x, NumericVector tx, NumericVector Tcal, NumericVector k, NumericVector lambda, NumericVector mu);
RcppExport SEXP BTYDplus_pcnbd_palive(SEXP xSEXP, SEXP txSEXP, SEXP TcalSEXP, SEXP kSEXP, SEXP lambdaSEXP, SEXP muSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type tx(txSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type Tcal(TcalSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type k(kSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP );
        NumericVector __result = pcnbd_palive(x, tx, Tcal, k, lambda, mu);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// pcnbd_slice_sample
NumericVector pcnbd_slice_sample(String what, NumericVector x, NumericVector tx, NumericVector Tcal, NumericVector litt, NumericVector k, NumericVector lambda, NumericVector mu, NumericVector tau, double t, double gamma, double r, double alpha, double s, double beta);
RcppExport SEXP BTYDplus_pcnbd_slice_sample(SEXP whatSEXP, SEXP xSEXP, SEXP txSEXP, SEXP TcalSEXP, SEXP littSEXP, SEXP kSEXP, SEXP lambdaSEXP, SEXP muSEXP, SEXP tauSEXP, SEXP tSEXP, SEXP gammaSEXP, SEXP rSEXP, SEXP alphaSEXP, SEXP sSEXP, SEXP betaSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< String >::type what(whatSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type tx(txSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type Tcal(TcalSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type litt(littSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type k(kSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type tau(tauSEXP );
        Rcpp::traits::input_parameter< double >::type t(tSEXP );
        Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP );
        Rcpp::traits::input_parameter< double >::type r(rSEXP );
        Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP );
        Rcpp::traits::input_parameter< double >::type s(sSEXP );
        Rcpp::traits::input_parameter< double >::type beta(betaSEXP );
        NumericVector __result = pcnbd_slice_sample(what, x, tx, Tcal, litt, k, lambda, mu, tau, t, gamma, r, alpha, s, beta);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
