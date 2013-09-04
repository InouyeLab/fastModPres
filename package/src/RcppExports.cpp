// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// GetDiag
NumericVector GetDiag(SEXP pBigMat);
RcppExport SEXP FastModPres_GetDiag(SEXP pBigMatSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        SEXP pBigMat = Rcpp::as<SEXP >(pBigMatSEXP);
        NumericVector __result = GetDiag(pBigMat);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// SetDiag
void SetDiag(SEXP pBigMat, NumericVector value);
RcppExport SEXP FastModPres_SetDiag(SEXP pBigMatSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        SEXP pBigMat = Rcpp::as<SEXP >(pBigMatSEXP);
        NumericVector value = Rcpp::as<NumericVector >(valueSEXP);
        SetDiag(pBigMat, value);
    }
    return R_NilValue;
END_RCPP
}
// MeanAdj
NumericVector MeanAdj(SEXP pAdjacency, IntegerVector moduleIndices);
RcppExport SEXP FastModPres_MeanAdj(SEXP pAdjacencySEXP, SEXP moduleIndicesSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        SEXP pAdjacency = Rcpp::as<SEXP >(pAdjacencySEXP);
        IntegerVector moduleIndices = Rcpp::as<IntegerVector >(moduleIndicesSEXP);
        NumericVector __result = MeanAdj(pAdjacency, moduleIndices);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
