#include <Rcpp.h>
#include <h3/h3api.h>

using namespace Rcpp;

// [[Rcpp::export]]
CharacterVector rcpp_h3_to_parent(String h3s, int res) {
  CharacterVector z(1);
  H3Index h3 = stringToH3(h3s.get_cstring());
  H3Index h3Parent = h3ToParent(h3, res);
  char h3ParentStr[17];
  h3ToString(h3Parent, h3ParentStr, sizeof(h3ParentStr));
  z[0] = h3ParentStr;
  return z;
}

// [[Rcpp::export]]
CharacterVector rcpp_h3_to_children(String h3s, int res) {
  H3Index h3 = stringToH3(h3s.get_cstring());
  int n = maxH3ToChildrenSize(h3, res);
  H3Index h3Children[n];
  h3ToChildren(h3, res, h3Children);
  CharacterVector z(n);
  for (int i = 0; i < n; ++i) {
    char childStr[17];
    h3ToString(h3Children[i], childStr, sizeof(childStr));
    z[i] = childStr;
  }

  return z;
}
