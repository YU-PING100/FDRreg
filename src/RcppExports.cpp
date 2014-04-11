// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/FDRreg.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// rtgamma_once
double rtgamma_once(double shape, double rate, double lb, double ub);
RcppExport SEXP FDRreg_rtgamma_once(SEXP shapeSEXP, SEXP rateSEXP, SEXP lbSEXP, SEXP ubSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< double >::type shape(shapeSEXP );
        Rcpp::traits::input_parameter< double >::type rate(rateSEXP );
        Rcpp::traits::input_parameter< double >::type lb(lbSEXP );
        Rcpp::traits::input_parameter< double >::type ub(ubSEXP );
        double __result = rtgamma_once(shape, rate, lb, ub);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// rdirichlet_once
NumericVector rdirichlet_once(NumericVector alpha);
RcppExport SEXP FDRreg_rdirichlet_once(SEXP alphaSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type alpha(alphaSEXP );
        NumericVector __result = rdirichlet_once(alpha);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// FDRregCPP
SEXP FDRregCPP(NumericVector z, const arma::mat& X, NumericVector M0, NumericVector MTot, const arma::mat& PriorPrecision, const arma::vec& PriorMean, int nmc, int nburn, double p0, const arma::vec& betaguess);
RcppExport SEXP FDRreg_FDRregCPP(SEXP zSEXP, SEXP XSEXP, SEXP M0SEXP, SEXP MTotSEXP, SEXP PriorPrecisionSEXP, SEXP PriorMeanSEXP, SEXP nmcSEXP, SEXP nburnSEXP, SEXP p0SEXP, SEXP betaguessSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP );
        Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type M0(M0SEXP );
        Rcpp::traits::input_parameter< NumericVector >::type MTot(MTotSEXP );
        Rcpp::traits::input_parameter< const arma::mat& >::type PriorPrecision(PriorPrecisionSEXP );
        Rcpp::traits::input_parameter< const arma::vec& >::type PriorMean(PriorMeanSEXP );
        Rcpp::traits::input_parameter< int >::type nmc(nmcSEXP );
        Rcpp::traits::input_parameter< int >::type nburn(nburnSEXP );
        Rcpp::traits::input_parameter< double >::type p0(p0SEXP );
        Rcpp::traits::input_parameter< const arma::vec& >::type betaguess(betaguessSEXP );
        SEXP __result = FDRregCPP(z, X, M0, MTot, PriorPrecision, PriorMean, nmc, nburn, p0, betaguess);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// EmpiricalBayesFDRregCPP
SEXP EmpiricalBayesFDRregCPP(NumericVector z, const arma::mat& X, NumericVector M0, NumericVector M1, const arma::mat& PriorPrecision, const arma::vec& PriorMean, int nmc, int nburn, const arma::vec& betaguess);
RcppExport SEXP FDRreg_EmpiricalBayesFDRregCPP(SEXP zSEXP, SEXP XSEXP, SEXP M0SEXP, SEXP M1SEXP, SEXP PriorPrecisionSEXP, SEXP PriorMeanSEXP, SEXP nmcSEXP, SEXP nburnSEXP, SEXP betaguessSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP );
        Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type M0(M0SEXP );
        Rcpp::traits::input_parameter< NumericVector >::type M1(M1SEXP );
        Rcpp::traits::input_parameter< const arma::mat& >::type PriorPrecision(PriorPrecisionSEXP );
        Rcpp::traits::input_parameter< const arma::vec& >::type PriorMean(PriorMeanSEXP );
        Rcpp::traits::input_parameter< int >::type nmc(nmcSEXP );
        Rcpp::traits::input_parameter< int >::type nburn(nburnSEXP );
        Rcpp::traits::input_parameter< const arma::vec& >::type betaguess(betaguessSEXP );
        SEXP __result = EmpiricalBayesFDRregCPP(z, X, M0, M1, PriorPrecision, PriorMean, nmc, nburn, betaguess);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// FullyBayesFDRregCPP
SEXP FullyBayesFDRregCPP(NumericVector z, const arma::mat& X, NumericVector M0, NumericVector M1, const arma::mat& PriorPrecision, const arma::vec& PriorMean, int nmc, int nburn, const arma::vec& betaguess);
RcppExport SEXP FDRreg_FullyBayesFDRregCPP(SEXP zSEXP, SEXP XSEXP, SEXP M0SEXP, SEXP M1SEXP, SEXP PriorPrecisionSEXP, SEXP PriorMeanSEXP, SEXP nmcSEXP, SEXP nburnSEXP, SEXP betaguessSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP );
        Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type M0(M0SEXP );
        Rcpp::traits::input_parameter< NumericVector >::type M1(M1SEXP );
        Rcpp::traits::input_parameter< const arma::mat& >::type PriorPrecision(PriorPrecisionSEXP );
        Rcpp::traits::input_parameter< const arma::vec& >::type PriorMean(PriorMeanSEXP );
        Rcpp::traits::input_parameter< int >::type nmc(nmcSEXP );
        Rcpp::traits::input_parameter< int >::type nburn(nburnSEXP );
        Rcpp::traits::input_parameter< const arma::vec& >::type betaguess(betaguessSEXP );
        SEXP __result = FullyBayesFDRregCPP(z, X, M0, M1, PriorPrecision, PriorMean, nmc, nburn, betaguess);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// mysample
int mysample(NumericVector probs);
static SEXP FDRreg_mysample_try(SEXP probsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::traits::input_parameter< NumericVector >::type probs(probsSEXP );
        int __result = mysample(probs);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP FDRreg_mysample(SEXP probsSEXP) {
    SEXP __result;
    {
        Rcpp::RNGScope __rngScope;
        __result = PROTECT(FDRreg_mysample_try(probsSEXP));
    }
    Rboolean __isInterrupt = Rf_inherits(__result, "interrupted-error");
    if (__isInterrupt) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean __isError = Rf_inherits(__result, "try-error");
    if (__isError) {
        SEXP __msgSEXP = Rf_asChar(__result);
        UNPROTECT(1);
        Rf_error(CHAR(__msgSEXP));
    }
    UNPROTECT(1);
    return __result;
}
// trapezoid
double trapezoid(NumericVector x, NumericVector y);
static SEXP FDRreg_trapezoid_try(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP );
        double __result = trapezoid(x, y);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP FDRreg_trapezoid(SEXP xSEXP, SEXP ySEXP) {
    SEXP __result;
    {
        Rcpp::RNGScope __rngScope;
        __result = PROTECT(FDRreg_trapezoid_try(xSEXP, ySEXP));
    }
    Rboolean __isInterrupt = Rf_inherits(__result, "interrupted-error");
    if (__isInterrupt) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean __isError = Rf_inherits(__result, "try-error");
    if (__isError) {
        SEXP __msgSEXP = Rf_asChar(__result);
        UNPROTECT(1);
        Rf_error(CHAR(__msgSEXP));
    }
    UNPROTECT(1);
    return __result;
}
// dnormix
NumericVector dnormix(NumericVector y, NumericVector weights, NumericVector mu, NumericVector tau2);
static SEXP FDRreg_dnormix_try(SEXP ySEXP, SEXP weightsSEXP, SEXP muSEXP, SEXP tau2SEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP );
        Rcpp::traits::input_parameter< NumericVector >::type weights(weightsSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type tau2(tau2SEXP );
        NumericVector __result = dnormix(y, weights, mu, tau2);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP FDRreg_dnormix(SEXP ySEXP, SEXP weightsSEXP, SEXP muSEXP, SEXP tau2SEXP) {
    SEXP __result;
    {
        Rcpp::RNGScope __rngScope;
        __result = PROTECT(FDRreg_dnormix_try(ySEXP, weightsSEXP, muSEXP, tau2SEXP));
    }
    Rboolean __isInterrupt = Rf_inherits(__result, "interrupted-error");
    if (__isInterrupt) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean __isError = Rf_inherits(__result, "try-error");
    if (__isError) {
        SEXP __msgSEXP = Rf_asChar(__result);
        UNPROTECT(1);
        Rf_error(CHAR(__msgSEXP));
    }
    UNPROTECT(1);
    return __result;
}
// marnormix
NumericVector marnormix(NumericVector y, NumericVector sigma2, NumericVector weights, NumericVector mu, NumericVector tau2);
static SEXP FDRreg_marnormix_try(SEXP ySEXP, SEXP sigma2SEXP, SEXP weightsSEXP, SEXP muSEXP, SEXP tau2SEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP );
        Rcpp::traits::input_parameter< NumericVector >::type sigma2(sigma2SEXP );
        Rcpp::traits::input_parameter< NumericVector >::type weights(weightsSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type tau2(tau2SEXP );
        NumericVector __result = marnormix(y, sigma2, weights, mu, tau2);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP FDRreg_marnormix(SEXP ySEXP, SEXP sigma2SEXP, SEXP weightsSEXP, SEXP muSEXP, SEXP tau2SEXP) {
    SEXP __result;
    {
        Rcpp::RNGScope __rngScope;
        __result = PROTECT(FDRreg_marnormix_try(ySEXP, sigma2SEXP, weightsSEXP, muSEXP, tau2SEXP));
    }
    Rboolean __isInterrupt = Rf_inherits(__result, "interrupted-error");
    if (__isInterrupt) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean __isError = Rf_inherits(__result, "try-error");
    if (__isError) {
        SEXP __msgSEXP = Rf_asChar(__result);
        UNPROTECT(1);
        Rf_error(CHAR(__msgSEXP));
    }
    UNPROTECT(1);
    return __result;
}
// rnormix
NumericVector rnormix(int n, NumericVector weights, NumericVector mu, NumericVector tau2);
static SEXP FDRreg_rnormix_try(SEXP nSEXP, SEXP weightsSEXP, SEXP muSEXP, SEXP tau2SEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::traits::input_parameter< int >::type n(nSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type weights(weightsSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type tau2(tau2SEXP );
        NumericVector __result = rnormix(n, weights, mu, tau2);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP FDRreg_rnormix(SEXP nSEXP, SEXP weightsSEXP, SEXP muSEXP, SEXP tau2SEXP) {
    SEXP __result;
    {
        Rcpp::RNGScope __rngScope;
        __result = PROTECT(FDRreg_rnormix_try(nSEXP, weightsSEXP, muSEXP, tau2SEXP));
    }
    Rboolean __isInterrupt = Rf_inherits(__result, "interrupted-error");
    if (__isInterrupt) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean __isError = Rf_inherits(__result, "try-error");
    if (__isError) {
        SEXP __msgSEXP = Rf_asChar(__result);
        UNPROTECT(1);
        Rf_error(CHAR(__msgSEXP));
    }
    UNPROTECT(1);
    return __result;
}
// draw_mixture_component
IntegerVector draw_mixture_component(NumericVector y, NumericVector sigma2, NumericVector weights, NumericVector mu, NumericVector tau2);
static SEXP FDRreg_draw_mixture_component_try(SEXP ySEXP, SEXP sigma2SEXP, SEXP weightsSEXP, SEXP muSEXP, SEXP tau2SEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP );
        Rcpp::traits::input_parameter< NumericVector >::type sigma2(sigma2SEXP );
        Rcpp::traits::input_parameter< NumericVector >::type weights(weightsSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type tau2(tau2SEXP );
        IntegerVector __result = draw_mixture_component(y, sigma2, weights, mu, tau2);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP FDRreg_draw_mixture_component(SEXP ySEXP, SEXP sigma2SEXP, SEXP weightsSEXP, SEXP muSEXP, SEXP tau2SEXP) {
    SEXP __result;
    {
        Rcpp::RNGScope __rngScope;
        __result = PROTECT(FDRreg_draw_mixture_component_try(ySEXP, sigma2SEXP, weightsSEXP, muSEXP, tau2SEXP));
    }
    Rboolean __isInterrupt = Rf_inherits(__result, "interrupted-error");
    if (__isInterrupt) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean __isError = Rf_inherits(__result, "try-error");
    if (__isError) {
        SEXP __msgSEXP = Rf_asChar(__result);
        UNPROTECT(1);
        Rf_error(CHAR(__msgSEXP));
    }
    UNPROTECT(1);
    return __result;
}
// PredictiveRecursionFDR
List PredictiveRecursionFDR(NumericVector z, NumericVector grid_x, NumericVector theta_guess, double nullprob = 0.95, double mu0 = 0.0, double sig0 = 1.0, double decay = -0.67);
static SEXP FDRreg_PredictiveRecursionFDR_try(SEXP zSEXP, SEXP grid_xSEXP, SEXP theta_guessSEXP, SEXP nullprobSEXP, SEXP mu0SEXP, SEXP sig0SEXP, SEXP decaySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type grid_x(grid_xSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type theta_guess(theta_guessSEXP );
        Rcpp::traits::input_parameter< double >::type nullprob(nullprobSEXP );
        Rcpp::traits::input_parameter< double >::type mu0(mu0SEXP );
        Rcpp::traits::input_parameter< double >::type sig0(sig0SEXP );
        Rcpp::traits::input_parameter< double >::type decay(decaySEXP );
        List __result = PredictiveRecursionFDR(z, grid_x, theta_guess, nullprob, mu0, sig0, decay);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP FDRreg_PredictiveRecursionFDR(SEXP zSEXP, SEXP grid_xSEXP, SEXP theta_guessSEXP, SEXP nullprobSEXP, SEXP mu0SEXP, SEXP sig0SEXP, SEXP decaySEXP) {
    SEXP __result;
    {
        Rcpp::RNGScope __rngScope;
        __result = PROTECT(FDRreg_PredictiveRecursionFDR_try(zSEXP, grid_xSEXP, theta_guessSEXP, nullprobSEXP, mu0SEXP, sig0SEXP, decaySEXP));
    }
    Rboolean __isInterrupt = Rf_inherits(__result, "interrupted-error");
    if (__isInterrupt) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean __isError = Rf_inherits(__result, "try-error");
    if (__isError) {
        SEXP __msgSEXP = Rf_asChar(__result);
        UNPROTECT(1);
        Rf_error(CHAR(__msgSEXP));
    }
    UNPROTECT(1);
    return __result;
}

// validate (ensure exported C++ functions exist before calling them)
static int FDRreg_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("int(*mysample)(NumericVector)");
        signatures.insert("double(*trapezoid)(NumericVector,NumericVector)");
        signatures.insert("NumericVector(*dnormix)(NumericVector,NumericVector,NumericVector,NumericVector)");
        signatures.insert("NumericVector(*marnormix)(NumericVector,NumericVector,NumericVector,NumericVector,NumericVector)");
        signatures.insert("NumericVector(*rnormix)(int,NumericVector,NumericVector,NumericVector)");
        signatures.insert("IntegerVector(*draw_mixture_component)(NumericVector,NumericVector,NumericVector,NumericVector,NumericVector)");
        signatures.insert("List(*PredictiveRecursionFDR)(NumericVector,NumericVector,NumericVector,double,double,double,double)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP FDRreg_RcppExport_registerCCallable() { 
    R_RegisterCCallable("FDRreg", "FDRreg_mysample", (DL_FUNC)FDRreg_mysample_try);
    R_RegisterCCallable("FDRreg", "FDRreg_trapezoid", (DL_FUNC)FDRreg_trapezoid_try);
    R_RegisterCCallable("FDRreg", "FDRreg_dnormix", (DL_FUNC)FDRreg_dnormix_try);
    R_RegisterCCallable("FDRreg", "FDRreg_marnormix", (DL_FUNC)FDRreg_marnormix_try);
    R_RegisterCCallable("FDRreg", "FDRreg_rnormix", (DL_FUNC)FDRreg_rnormix_try);
    R_RegisterCCallable("FDRreg", "FDRreg_draw_mixture_component", (DL_FUNC)FDRreg_draw_mixture_component_try);
    R_RegisterCCallable("FDRreg", "FDRreg_PredictiveRecursionFDR", (DL_FUNC)FDRreg_PredictiveRecursionFDR_try);
    R_RegisterCCallable("FDRreg", "FDRreg_RcppExport_validate", (DL_FUNC)FDRreg_RcppExport_validate);
    return R_NilValue;
}
