// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// rcpp_hex_ring
CharacterVector rcpp_hex_ring(String h3s, int radius);
RcppExport SEXP _h3_rcpp_hex_ring(SEXP h3sSEXP, SEXP radiusSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type h3s(h3sSEXP);
    Rcpp::traits::input_parameter< int >::type radius(radiusSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_hex_ring(h3s, radius));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_h3_to_parent
CharacterVector rcpp_h3_to_parent(String h3s, int res);
RcppExport SEXP _h3_rcpp_h3_to_parent(SEXP h3sSEXP, SEXP resSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type h3s(h3sSEXP);
    Rcpp::traits::input_parameter< int >::type res(resSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_h3_to_parent(h3s, res));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_h3_to_children
CharacterVector rcpp_h3_to_children(String h3s, int res);
RcppExport SEXP _h3_rcpp_h3_to_children(SEXP h3sSEXP, SEXP resSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type h3s(h3sSEXP);
    Rcpp::traits::input_parameter< int >::type res(resSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_h3_to_children(h3s, res));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_compact
CharacterVector rcpp_compact(CharacterVector h3Str);
RcppExport SEXP _h3_rcpp_compact(SEXP h3StrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type h3Str(h3StrSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_compact(h3Str));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_geo_to_h3
CharacterVector rcpp_geo_to_h3(NumericMatrix latlng, int res);
RcppExport SEXP _h3_rcpp_geo_to_h3(SEXP latlngSEXP, SEXP resSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type latlng(latlngSEXP);
    Rcpp::traits::input_parameter< int >::type res(resSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_geo_to_h3(latlng, res));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_h3_to_geo
NumericMatrix rcpp_h3_to_geo(CharacterVector h3s);
RcppExport SEXP _h3_rcpp_h3_to_geo(SEXP h3sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type h3s(h3sSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_h3_to_geo(h3s));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_h3_to_geo_boundary
List rcpp_h3_to_geo_boundary(CharacterVector h3s);
RcppExport SEXP _h3_rcpp_h3_to_geo_boundary(SEXP h3sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type h3s(h3sSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_h3_to_geo_boundary(h3s));
    return rcpp_result_gen;
END_RCPP
}
// h3_get_resolution
NumericVector h3_get_resolution(CharacterVector h3Str);
RcppExport SEXP _h3_h3_get_resolution(SEXP h3StrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type h3Str(h3StrSEXP);
    rcpp_result_gen = Rcpp::wrap(h3_get_resolution(h3Str));
    return rcpp_result_gen;
END_RCPP
}
// h3_is_valid
LogicalVector h3_is_valid(CharacterVector h3Str);
RcppExport SEXP _h3_h3_is_valid(SEXP h3StrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type h3Str(h3StrSEXP);
    rcpp_result_gen = Rcpp::wrap(h3_is_valid(h3Str));
    return rcpp_result_gen;
END_RCPP
}
// h3_get_base_cell
NumericVector h3_get_base_cell(CharacterVector h3Str);
RcppExport SEXP _h3_h3_get_base_cell(SEXP h3StrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type h3Str(h3StrSEXP);
    rcpp_result_gen = Rcpp::wrap(h3_get_base_cell(h3Str));
    return rcpp_result_gen;
END_RCPP
}
// h3_is_pentagon
LogicalVector h3_is_pentagon(CharacterVector h3Str);
RcppExport SEXP _h3_h3_is_pentagon(SEXP h3StrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type h3Str(h3StrSEXP);
    rcpp_result_gen = Rcpp::wrap(h3_is_pentagon(h3Str));
    return rcpp_result_gen;
END_RCPP
}
// h3_is_res_class_iii
LogicalVector h3_is_res_class_iii(CharacterVector h3Str);
RcppExport SEXP _h3_h3_is_res_class_iii(SEXP h3StrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type h3Str(h3StrSEXP);
    rcpp_result_gen = Rcpp::wrap(h3_is_res_class_iii(h3Str));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_h3_line
CharacterVector rcpp_h3_line(String startStr, String endStr);
RcppExport SEXP _h3_rcpp_h3_line(SEXP startStrSEXP, SEXP endStrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type startStr(startStrSEXP);
    Rcpp::traits::input_parameter< String >::type endStr(endStrSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_h3_line(startStr, endStr));
    return rcpp_result_gen;
END_RCPP
}
// num_hexagons
NumericVector num_hexagons(NumericVector res);
RcppExport SEXP _h3_num_hexagons(SEXP resSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type res(resSEXP);
    rcpp_result_gen = Rcpp::wrap(num_hexagons(res));
    return rcpp_result_gen;
END_RCPP
}
// hex_area
NumericVector hex_area(NumericVector res, String unit);
RcppExport SEXP _h3_hex_area(SEXP resSEXP, SEXP unitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type res(resSEXP);
    Rcpp::traits::input_parameter< String >::type unit(unitSEXP);
    rcpp_result_gen = Rcpp::wrap(hex_area(res, unit));
    return rcpp_result_gen;
END_RCPP
}
// edge_length
NumericVector edge_length(NumericVector res, String unit);
RcppExport SEXP _h3_edge_length(SEXP resSEXP, SEXP unitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type res(resSEXP);
    Rcpp::traits::input_parameter< String >::type unit(unitSEXP);
    rcpp_result_gen = Rcpp::wrap(edge_length(res, unit));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_polyfill
CharacterVector rcpp_polyfill(NumericMatrix coords, int res);
RcppExport SEXP _h3_rcpp_polyfill(SEXP coordsSEXP, SEXP resSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type coords(coordsSEXP);
    Rcpp::traits::input_parameter< int >::type res(resSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_polyfill(coords, res));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_k_ring
CharacterVector rcpp_k_ring(String h3s, int radius);
RcppExport SEXP _h3_rcpp_k_ring(SEXP h3sSEXP, SEXP radiusSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type h3s(h3sSEXP);
    Rcpp::traits::input_parameter< int >::type radius(radiusSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_k_ring(h3s, radius));
    return rcpp_result_gen;
END_RCPP
}
// h3_distance
NumericVector h3_distance(String origin, CharacterVector destinations);
RcppExport SEXP _h3_h3_distance(SEXP originSEXP, SEXP destinationsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type origin(originSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type destinations(destinationsSEXP);
    rcpp_result_gen = Rcpp::wrap(h3_distance(origin, destinations));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_k_ring_distances
List rcpp_k_ring_distances(String h3s, int radius);
RcppExport SEXP _h3_rcpp_k_ring_distances(SEXP h3sSEXP, SEXP radiusSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type h3s(h3sSEXP);
    Rcpp::traits::input_parameter< int >::type radius(radiusSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_k_ring_distances(h3s, radius));
    return rcpp_result_gen;
END_RCPP
}
// h3_indexes_are_neighbors
LogicalVector h3_indexes_are_neighbors(String origin, CharacterVector destinations);
RcppExport SEXP _h3_h3_indexes_are_neighbors(SEXP originSEXP, SEXP destinationsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type origin(originSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type destinations(destinationsSEXP);
    rcpp_result_gen = Rcpp::wrap(h3_indexes_are_neighbors(origin, destinations));
    return rcpp_result_gen;
END_RCPP
}
// get_h3_unidirectional_edge
CharacterVector get_h3_unidirectional_edge(String origin, String destination);
RcppExport SEXP _h3_get_h3_unidirectional_edge(SEXP originSEXP, SEXP destinationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type origin(originSEXP);
    Rcpp::traits::input_parameter< String >::type destination(destinationSEXP);
    rcpp_result_gen = Rcpp::wrap(get_h3_unidirectional_edge(origin, destination));
    return rcpp_result_gen;
END_RCPP
}
// h3_unidirectional_edge_is_valid
LogicalVector h3_unidirectional_edge_is_valid(CharacterVector h3_edge_indexes);
RcppExport SEXP _h3_h3_unidirectional_edge_is_valid(SEXP h3_edge_indexesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type h3_edge_indexes(h3_edge_indexesSEXP);
    rcpp_result_gen = Rcpp::wrap(h3_unidirectional_edge_is_valid(h3_edge_indexes));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_h3_unidirectional_edge_boundary
NumericMatrix rcpp_get_h3_unidirectional_edge_boundary(String h3EdgeStr);
RcppExport SEXP _h3_rcpp_get_h3_unidirectional_edge_boundary(SEXP h3EdgeStrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type h3EdgeStr(h3EdgeStrSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_h3_unidirectional_edge_boundary(h3EdgeStr));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_h3_unidirectional_edges_from_hexagon
CharacterVector rcpp_get_h3_unidirectional_edges_from_hexagon(String originStr);
RcppExport SEXP _h3_rcpp_get_h3_unidirectional_edges_from_hexagon(SEXP originStrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type originStr(originStrSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_h3_unidirectional_edges_from_hexagon(originStr));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_origin_h3_index_from_unidirectional_edge
String rcpp_get_origin_h3_index_from_unidirectional_edge(String h3EdgeStr);
RcppExport SEXP _h3_rcpp_get_origin_h3_index_from_unidirectional_edge(SEXP h3EdgeStrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type h3EdgeStr(h3EdgeStrSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_origin_h3_index_from_unidirectional_edge(h3EdgeStr));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_destination_h3_index_from_unidirectional_edge
String rcpp_get_destination_h3_index_from_unidirectional_edge(String h3EdgeStr);
RcppExport SEXP _h3_rcpp_get_destination_h3_index_from_unidirectional_edge(SEXP h3EdgeStrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type h3EdgeStr(h3EdgeStrSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_destination_h3_index_from_unidirectional_edge(h3EdgeStr));
    return rcpp_result_gen;
END_RCPP
}
// H3_to_parent
std::string H3_to_parent(std::string h3s, int res);
RcppExport SEXP _h3_H3_to_parent(SEXP h3sSEXP, SEXP resSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type h3s(h3sSEXP);
    Rcpp::traits::input_parameter< int >::type res(resSEXP);
    rcpp_result_gen = Rcpp::wrap(H3_to_parent(h3s, res));
    return rcpp_result_gen;
END_RCPP
}
// points_to_H3
std::vector<std::string> points_to_H3(const std::vector<double>& lon, const std::vector<double>& lat, const int& res);
RcppExport SEXP _h3_points_to_H3(SEXP lonSEXP, SEXP latSEXP, SEXP resSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<double>& >::type lon(lonSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type lat(latSEXP);
    Rcpp::traits::input_parameter< const int& >::type res(resSEXP);
    rcpp_result_gen = Rcpp::wrap(points_to_H3(lon, lat, res));
    return rcpp_result_gen;
END_RCPP
}
// hex_centers_inbbox
std::map <std::string, std::vector<double>> hex_centers_inbbox(const std::vector<double>& ext_lon, const std::vector<double>& ext_lat, const int& res);
RcppExport SEXP _h3_hex_centers_inbbox(SEXP ext_lonSEXP, SEXP ext_latSEXP, SEXP resSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<double>& >::type ext_lon(ext_lonSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type ext_lat(ext_latSEXP);
    Rcpp::traits::input_parameter< const int& >::type res(resSEXP);
    rcpp_result_gen = Rcpp::wrap(hex_centers_inbbox(ext_lon, ext_lat, res));
    return rcpp_result_gen;
END_RCPP
}
// resample_down
std::map <std::string, double> resample_down(const int& level_to, const std::vector<std::string>& parent_ind, const std::vector<double>& parent_vals);
RcppExport SEXP _h3_resample_down(SEXP level_toSEXP, SEXP parent_indSEXP, SEXP parent_valsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int& >::type level_to(level_toSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type parent_ind(parent_indSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type parent_vals(parent_valsSEXP);
    rcpp_result_gen = Rcpp::wrap(resample_down(level_to, parent_ind, parent_vals));
    return rcpp_result_gen;
END_RCPP
}
// get_direct_parents
std::map <std::string, std::string> get_direct_parents(const std::vector<std::string>& children_ind);
RcppExport SEXP _h3_get_direct_parents(SEXP children_indSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type children_ind(children_indSEXP);
    rcpp_result_gen = Rcpp::wrap(get_direct_parents(children_ind));
    return rcpp_result_gen;
END_RCPP
}
// resample_up
std::map <std::string, double> resample_up(const std::string func, const std::vector<std::string>& children_ind, const std::vector<double>& children_vals);
RcppExport SEXP _h3_resample_up(SEXP funcSEXP, SEXP children_indSEXP, SEXP children_valsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type func(funcSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type children_ind(children_indSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type children_vals(children_valsSEXP);
    rcpp_result_gen = Rcpp::wrap(resample_up(func, children_ind, children_vals));
    return rcpp_result_gen;
END_RCPP
}
// resample_up_any
std::map <std::string, double> resample_up_any(const std::string func, const int level_to, const std::vector<std::string>& children_ind, const std::vector<double>& children_vals);
RcppExport SEXP _h3_resample_up_any(SEXP funcSEXP, SEXP level_toSEXP, SEXP children_indSEXP, SEXP children_valsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type func(funcSEXP);
    Rcpp::traits::input_parameter< const int >::type level_to(level_toSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type children_ind(children_indSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type children_vals(children_valsSEXP);
    rcpp_result_gen = Rcpp::wrap(resample_up_any(func, level_to, children_ind, children_vals));
    return rcpp_result_gen;
END_RCPP
}
// simple_sum
std::map <std::string, double> simple_sum(std::vector<std::string>& ind1, std::vector<double>& z1, std::vector<std::string>& ind2, std::vector<double>& z2);
RcppExport SEXP _h3_simple_sum(SEXP ind1SEXP, SEXP z1SEXP, SEXP ind2SEXP, SEXP z2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string>& >::type ind1(ind1SEXP);
    Rcpp::traits::input_parameter< std::vector<double>& >::type z1(z1SEXP);
    Rcpp::traits::input_parameter< std::vector<std::string>& >::type ind2(ind2SEXP);
    Rcpp::traits::input_parameter< std::vector<double>& >::type z2(z2SEXP);
    rcpp_result_gen = Rcpp::wrap(simple_sum(ind1, z1, ind2, z2));
    return rcpp_result_gen;
END_RCPP
}
// global_extremum
double global_extremum(std::vector<std::string>& ind, std::vector<double>& z, const std::string func);
RcppExport SEXP _h3_global_extremum(SEXP indSEXP, SEXP zSEXP, SEXP funcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string>& >::type ind(indSEXP);
    Rcpp::traits::input_parameter< std::vector<double>& >::type z(zSEXP);
    Rcpp::traits::input_parameter< const std::string >::type func(funcSEXP);
    rcpp_result_gen = Rcpp::wrap(global_extremum(ind, z, func));
    return rcpp_result_gen;
END_RCPP
}
// zonal_statistics
std::map <std::string, std::vector<double>> zonal_statistics(std::vector<std::string>& zone_ind, std::vector<double>& zone_z, std::vector<std::string>& rast_ind, std::vector<double>& rast_z, const std::string stat_type, const bool resample_zone);
RcppExport SEXP _h3_zonal_statistics(SEXP zone_indSEXP, SEXP zone_zSEXP, SEXP rast_indSEXP, SEXP rast_zSEXP, SEXP stat_typeSEXP, SEXP resample_zoneSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string>& >::type zone_ind(zone_indSEXP);
    Rcpp::traits::input_parameter< std::vector<double>& >::type zone_z(zone_zSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string>& >::type rast_ind(rast_indSEXP);
    Rcpp::traits::input_parameter< std::vector<double>& >::type rast_z(rast_zSEXP);
    Rcpp::traits::input_parameter< const std::string >::type stat_type(stat_typeSEXP);
    Rcpp::traits::input_parameter< const bool >::type resample_zone(resample_zoneSEXP);
    rcpp_result_gen = Rcpp::wrap(zonal_statistics(zone_ind, zone_z, rast_ind, rast_z, stat_type, resample_zone));
    return rcpp_result_gen;
END_RCPP
}
// cell_vecinity
std::vector<std::string> cell_vecinity(std::string h3s, int radius);
RcppExport SEXP _h3_cell_vecinity(SEXP h3sSEXP, SEXP radiusSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type h3s(h3sSEXP);
    Rcpp::traits::input_parameter< int >::type radius(radiusSEXP);
    rcpp_result_gen = Rcpp::wrap(cell_vecinity(h3s, radius));
    return rcpp_result_gen;
END_RCPP
}
// simple_focal
std::map <std::string, double> simple_focal(std::vector<std::string>& inds, std::vector<double>& z, const std::string stat_type, int vecinity);
RcppExport SEXP _h3_simple_focal(SEXP indsSEXP, SEXP zSEXP, SEXP stat_typeSEXP, SEXP vecinitySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string>& >::type inds(indsSEXP);
    Rcpp::traits::input_parameter< std::vector<double>& >::type z(zSEXP);
    Rcpp::traits::input_parameter< const std::string >::type stat_type(stat_typeSEXP);
    Rcpp::traits::input_parameter< int >::type vecinity(vecinitySEXP);
    rcpp_result_gen = Rcpp::wrap(simple_focal(inds, z, stat_type, vecinity));
    return rcpp_result_gen;
END_RCPP
}
// indexes_to_coords
std::map <std::string, std::vector<double>> indexes_to_coords(std::vector<std::string>& inds);
RcppExport SEXP _h3_indexes_to_coords(SEXP indsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string>& >::type inds(indsSEXP);
    rcpp_result_gen = Rcpp::wrap(indexes_to_coords(inds));
    return rcpp_result_gen;
END_RCPP
}
// cell_azimuth
double cell_azimuth(std::string& h3_index);
RcppExport SEXP _h3_cell_azimuth(SEXP h3_indexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string& >::type h3_index(h3_indexSEXP);
    rcpp_result_gen = Rcpp::wrap(cell_azimuth(h3_index));
    return rcpp_result_gen;
END_RCPP
}
// gradient_aspect
std::map <std::string, std::vector<double>> gradient_aspect(std::vector<std::string>& inds, std::vector<double>& z, const std::string stat_type);
RcppExport SEXP _h3_gradient_aspect(SEXP indsSEXP, SEXP zSEXP, SEXP stat_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string>& >::type inds(indsSEXP);
    Rcpp::traits::input_parameter< std::vector<double>& >::type z(zSEXP);
    Rcpp::traits::input_parameter< const std::string >::type stat_type(stat_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(gradient_aspect(inds, z, stat_type));
    return rcpp_result_gen;
END_RCPP
}
// drainage
std::map <std::string, std::string> drainage(std::vector<std::string>& inds, std::vector<double>& z);
RcppExport SEXP _h3_drainage(SEXP indsSEXP, SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string>& >::type inds(indsSEXP);
    Rcpp::traits::input_parameter< std::vector<double>& >::type z(zSEXP);
    rcpp_result_gen = Rcpp::wrap(drainage(inds, z));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_h3_rcpp_hex_ring", (DL_FUNC) &_h3_rcpp_hex_ring, 2},
    {"_h3_rcpp_h3_to_parent", (DL_FUNC) &_h3_rcpp_h3_to_parent, 2},
    {"_h3_rcpp_h3_to_children", (DL_FUNC) &_h3_rcpp_h3_to_children, 2},
    {"_h3_rcpp_compact", (DL_FUNC) &_h3_rcpp_compact, 1},
    {"_h3_rcpp_geo_to_h3", (DL_FUNC) &_h3_rcpp_geo_to_h3, 2},
    {"_h3_rcpp_h3_to_geo", (DL_FUNC) &_h3_rcpp_h3_to_geo, 1},
    {"_h3_rcpp_h3_to_geo_boundary", (DL_FUNC) &_h3_rcpp_h3_to_geo_boundary, 1},
    {"_h3_h3_get_resolution", (DL_FUNC) &_h3_h3_get_resolution, 1},
    {"_h3_h3_is_valid", (DL_FUNC) &_h3_h3_is_valid, 1},
    {"_h3_h3_get_base_cell", (DL_FUNC) &_h3_h3_get_base_cell, 1},
    {"_h3_h3_is_pentagon", (DL_FUNC) &_h3_h3_is_pentagon, 1},
    {"_h3_h3_is_res_class_iii", (DL_FUNC) &_h3_h3_is_res_class_iii, 1},
    {"_h3_rcpp_h3_line", (DL_FUNC) &_h3_rcpp_h3_line, 2},
    {"_h3_num_hexagons", (DL_FUNC) &_h3_num_hexagons, 1},
    {"_h3_hex_area", (DL_FUNC) &_h3_hex_area, 2},
    {"_h3_edge_length", (DL_FUNC) &_h3_edge_length, 2},
    {"_h3_rcpp_polyfill", (DL_FUNC) &_h3_rcpp_polyfill, 2},
    {"_h3_rcpp_k_ring", (DL_FUNC) &_h3_rcpp_k_ring, 2},
    {"_h3_h3_distance", (DL_FUNC) &_h3_h3_distance, 2},
    {"_h3_rcpp_k_ring_distances", (DL_FUNC) &_h3_rcpp_k_ring_distances, 2},
    {"_h3_h3_indexes_are_neighbors", (DL_FUNC) &_h3_h3_indexes_are_neighbors, 2},
    {"_h3_get_h3_unidirectional_edge", (DL_FUNC) &_h3_get_h3_unidirectional_edge, 2},
    {"_h3_h3_unidirectional_edge_is_valid", (DL_FUNC) &_h3_h3_unidirectional_edge_is_valid, 1},
    {"_h3_rcpp_get_h3_unidirectional_edge_boundary", (DL_FUNC) &_h3_rcpp_get_h3_unidirectional_edge_boundary, 1},
    {"_h3_rcpp_get_h3_unidirectional_edges_from_hexagon", (DL_FUNC) &_h3_rcpp_get_h3_unidirectional_edges_from_hexagon, 1},
    {"_h3_rcpp_get_origin_h3_index_from_unidirectional_edge", (DL_FUNC) &_h3_rcpp_get_origin_h3_index_from_unidirectional_edge, 1},
    {"_h3_rcpp_get_destination_h3_index_from_unidirectional_edge", (DL_FUNC) &_h3_rcpp_get_destination_h3_index_from_unidirectional_edge, 1},
    {"_h3_H3_to_parent", (DL_FUNC) &_h3_H3_to_parent, 2},
    {"_h3_points_to_H3", (DL_FUNC) &_h3_points_to_H3, 3},
    {"_h3_hex_centers_inbbox", (DL_FUNC) &_h3_hex_centers_inbbox, 3},
    {"_h3_resample_down", (DL_FUNC) &_h3_resample_down, 3},
    {"_h3_get_direct_parents", (DL_FUNC) &_h3_get_direct_parents, 1},
    {"_h3_resample_up", (DL_FUNC) &_h3_resample_up, 3},
    {"_h3_resample_up_any", (DL_FUNC) &_h3_resample_up_any, 4},
    {"_h3_simple_sum", (DL_FUNC) &_h3_simple_sum, 4},
    {"_h3_global_extremum", (DL_FUNC) &_h3_global_extremum, 3},
    {"_h3_zonal_statistics", (DL_FUNC) &_h3_zonal_statistics, 6},
    {"_h3_cell_vecinity", (DL_FUNC) &_h3_cell_vecinity, 2},
    {"_h3_simple_focal", (DL_FUNC) &_h3_simple_focal, 4},
    {"_h3_indexes_to_coords", (DL_FUNC) &_h3_indexes_to_coords, 1},
    {"_h3_cell_azimuth", (DL_FUNC) &_h3_cell_azimuth, 1},
    {"_h3_gradient_aspect", (DL_FUNC) &_h3_gradient_aspect, 3},
    {"_h3_drainage", (DL_FUNC) &_h3_drainage, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_h3(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
