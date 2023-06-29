#include <HepMC3/FourVector.h>
#include <sstream> // __str__

#include <functional>
#include <pybind11/pybind11.h>
#include <string>
#include <HepMC3/Version.h>
#include <HepMC3/Reader.h>
#include <HepMC3/Writer.h>
#include <HepMC3/Print.h>
#include <src/stl_binders.hpp>
#include <src/binders.h>


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

void bind_pyHepMC3_1(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // HepMC3::FourVector2 file:HepMC3/FourVector.h line:36
		pybind11::class_<HepMC3::FourVector2, std::shared_ptr<HepMC3::FourVector2>> cl(M("HepMC3"), "FourVector", "Generic 4-vector\n\n  Interpretation of its content depends on accessors used: it's much simpler to do this\n  than to distinguish between space and momentum vectors via the type system (especially\n  given the need for backward compatibility with HepMC2). Be sensible and don't call\n  energy functions on spatial vectors! To avoid duplication, most definitions are only\n  implemented on the spatial function names, with the energy-momentum functions as aliases.\n\n  This is  intended to be a fully featured 4-vector, but does contain the majority\n  of common non-boosting functionality, as well as a few support operations on\n  4-vectors.\n\n  The implementations in this class are fully inlined.");
		cl.def( pybind11::init( [](){ return new HepMC3::FourVector2(); } ) );
		cl.def( pybind11::init<double, double, double, double>(), pybind11::arg("xx"), pybind11::arg("yy"), pybind11::arg("zz"), pybind11::arg("ee") );

		cl.def( pybind11::init( [](HepMC3::FourVector2 const &o){ return new HepMC3::FourVector2(o); } ) );
		cl.def("set", (void (HepMC3::FourVector2::*)(double, double, double, double)) &HepMC3::FourVector2::set, "Set all FourVector2 fields, in order x,y,z,t \n\nC++: HepMC3::FourVector2::set(double, double, double, double) --> void", pybind11::arg("x1"), pybind11::arg("x2"), pybind11::arg("x3"), pybind11::arg("x4"));
		cl.def("set_component", (void (HepMC3::FourVector2::*)(const int, const double)) &HepMC3::FourVector2::set_component, "set component of position/displacement\n\nC++: HepMC3::FourVector2::set_component(const int, const double) --> void", pybind11::arg("i"), pybind11::arg("x"));
		cl.def("get_component", (double (HepMC3::FourVector2::*)(const int) const) &HepMC3::FourVector2::get_component, "get component of position/displacement\n\nC++: HepMC3::FourVector2::get_component(const int) const --> double", pybind11::arg("i"));
		cl.def("x", (double (HepMC3::FourVector2::*)() const) &HepMC3::FourVector2::x, "x-component of position/displacement\n\nC++: HepMC3::FourVector2::x() const --> double");
		cl.def("set_x", (void (HepMC3::FourVector2::*)(double)) &HepMC3::FourVector2::set_x, "Set x-component of position/displacement\n\nC++: HepMC3::FourVector2::set_x(double) --> void", pybind11::arg("xx"));
		cl.def("setX", (void (HepMC3::FourVector2::*)(double)) &HepMC3::FourVector2::setX, "Prefer the HepMC-style set_x() function\n\nC++: HepMC3::FourVector2::setX(double) --> void", pybind11::arg("xx"));
		cl.def("y", (double (HepMC3::FourVector2::*)() const) &HepMC3::FourVector2::y, "y-component of position/displacement\n\nC++: HepMC3::FourVector2::y() const --> double");
		cl.def("set_y", (void (HepMC3::FourVector2::*)(double)) &HepMC3::FourVector2::set_y, "Set y-component of position/displacement\n\nC++: HepMC3::FourVector2::set_y(double) --> void", pybind11::arg("yy"));
		cl.def("setY", (void (HepMC3::FourVector2::*)(double)) &HepMC3::FourVector2::setY, "Prefer the HepMC-style set_y() function\n\nC++: HepMC3::FourVector2::setY(double) --> void", pybind11::arg("yy"));
		cl.def("z", (double (HepMC3::FourVector2::*)() const) &HepMC3::FourVector2::z, "z-component of position/displacement\n\nC++: HepMC3::FourVector2::z() const --> double");
		cl.def("set_z", (void (HepMC3::FourVector2::*)(double)) &HepMC3::FourVector2::set_z, "Set z-component of position/displacement\n\nC++: HepMC3::FourVector2::set_z(double) --> void", pybind11::arg("zz"));
		cl.def("setZ", (void (HepMC3::FourVector2::*)(double)) &HepMC3::FourVector2::setZ, "Prefer the HepMC-style set_z() function\n\nC++: HepMC3::FourVector2::setZ(double) --> void", pybind11::arg("zz"));
		cl.def("t", (double (HepMC3::FourVector2::*)() const) &HepMC3::FourVector2::t, "Time component of position/displacement\n\nC++: HepMC3::FourVector2::t() const --> double");
		cl.def("set_t", (void (HepMC3::FourVector2::*)(double)) &HepMC3::FourVector2::set_t, "Set time component of position/displacement\n\nC++: HepMC3::FourVector2::set_t(double) --> void", pybind11::arg("tt"));
		cl.def("setT", (void (HepMC3::FourVector2::*)(double)) &HepMC3::FourVector2::setT, "Prefer the HepMC-style set_t() function\n\nC++: HepMC3::FourVector2::setT(double) --> void", pybind11::arg("tt"));
		cl.def("px", (double (HepMC3::FourVector2::*)() const) &HepMC3::FourVector2::px, "x-component of momentum\n\nC++: HepMC3::FourVector2::px() const --> double");
		cl.def("set_px", (void (HepMC3::FourVector2::*)(double)) &HepMC3::FourVector2::set_px, "Set x-component of momentum\n\nC++: HepMC3::FourVector2::set_px(double) --> void", pybind11::arg("pxx"));
		cl.def("setPx", (void (HepMC3::FourVector2::*)(double)) &HepMC3::FourVector2::setPx, "Prefer the HepMC-style set_px() function\n\nC++: HepMC3::FourVector2::setPx(double) --> void", pybind11::arg("pxx"));
		cl.def("py", (double (HepMC3::FourVector2::*)() const) &HepMC3::FourVector2::py, "y-component of momentum\n\nC++: HepMC3::FourVector2::py() const --> double");
		cl.def("set_py", (void (HepMC3::FourVector2::*)(double)) &HepMC3::FourVector2::set_py, "Set y-component of momentum\n\nC++: HepMC3::FourVector2::set_py(double) --> void", pybind11::arg("pyy"));
		cl.def("setPy", (void (HepMC3::FourVector2::*)(double)) &HepMC3::FourVector2::setPy, "Prefer the HepMC-style set_py() function\n\nC++: HepMC3::FourVector2::setPy(double) --> void", pybind11::arg("pyy"));
		cl.def("pz", (double (HepMC3::FourVector2::*)() const) &HepMC3::FourVector2::pz, "z-component of momentum\n\nC++: HepMC3::FourVector2::pz() const --> double");
		cl.def("set_pz", (void (HepMC3::FourVector2::*)(double)) &HepMC3::FourVector2::set_pz, "Set z-component of momentum\n\nC++: HepMC3::FourVector2::set_pz(double) --> void", pybind11::arg("pzz"));
		cl.def("setPz", (void (HepMC3::FourVector2::*)(double)) &HepMC3::FourVector2::setPz, "Prefer the HepMC-style set_pz() function\n\nC++: HepMC3::FourVector2::setPz(double) --> void", pybind11::arg("pzz"));
		cl.def("e", (double (HepMC3::FourVector2::*)() const) &HepMC3::FourVector2::e, "Energy component of momentum\n\nC++: HepMC3::FourVector2::e() const --> double");
		cl.def("set_e", (void (HepMC3::FourVector2::*)(double)) &HepMC3::FourVector2::set_e, "Set energy component of momentum\n\nC++: HepMC3::FourVector2::set_e(double) --> void", pybind11::arg("ee"));
		cl.def("setE", (void (HepMC3::FourVector2::*)(double)) &HepMC3::FourVector2::setE, "Prefer the HepMC-style set_y() function\n\nC++: HepMC3::FourVector2::setE(double) --> void", pybind11::arg("ee"));
		cl.def("length2", (double (HepMC3::FourVector2::*)() const) &HepMC3::FourVector2::length2, "Squared magnitude of (x, y, z) 3-vector\n\nC++: HepMC3::FourVector2::length2() const --> double");
		cl.def("length", (double (HepMC3::FourVector2::*)() const) &HepMC3::FourVector2::length, "Magnitude of spatial (x, y, z) 3-vector\n\nC++: HepMC3::FourVector2::length() const --> double");
		cl.def("rho", (double (HepMC3::FourVector2::*)() const) &HepMC3::FourVector2::rho, "Magnitude of spatial (x, y, z) 3-vector, for HepMC2 compatibility\n\nC++: HepMC3::FourVector2::rho() const --> double");
		cl.def("perp2", (double (HepMC3::FourVector2::*)() const) &HepMC3::FourVector2::perp2, "Squared magnitude of (x, y) vector\n\nC++: HepMC3::FourVector2::perp2() const --> double");
		cl.def("perp", (double (HepMC3::FourVector2::*)() const) &HepMC3::FourVector2::perp, "Magnitude of (x, y) vector\n\nC++: HepMC3::FourVector2::perp() const --> double");
		cl.def("interval", (double (HepMC3::FourVector2::*)() const) &HepMC3::FourVector2::interval, "Spacetime invariant interval s^2 = t^2 - x^2 - y^2 - z^2\n\nC++: HepMC3::FourVector2::interval() const --> double");
		cl.def("p3mod2", (double (HepMC3::FourVector2::*)() const) &HepMC3::FourVector2::p3mod2, "Squared magnitude of p3 = (px, py, pz) vector\n\nC++: HepMC3::FourVector2::p3mod2() const --> double");
		cl.def("p3mod", (double (HepMC3::FourVector2::*)() const) &HepMC3::FourVector2::p3mod, "Magnitude of p3 = (px, py, pz) vector\n\nC++: HepMC3::FourVector2::p3mod() const --> double");
		cl.def("pt2", (double (HepMC3::FourVector2::*)() const) &HepMC3::FourVector2::pt2, "Squared transverse momentum px^2 + py^2\n\nC++: HepMC3::FourVector2::pt2() const --> double");
		cl.def("pt", (double (HepMC3::FourVector2::*)() const) &HepMC3::FourVector2::pt, "Transverse momentum\n\nC++: HepMC3::FourVector2::pt() const --> double");
		cl.def("m2", (double (HepMC3::FourVector2::*)() const) &HepMC3::FourVector2::m2, "Squared invariant mass m^2 = E^2 - px^2 - py^2 - pz^2\n\nC++: HepMC3::FourVector2::m2() const --> double");
		cl.def("m", (double (HepMC3::FourVector2::*)() const) &HepMC3::FourVector2::m, "Invariant mass. Returns -sqrt(-m) if e^2 - P^2 is negative\n\nC++: HepMC3::FourVector2::m() const --> double");
		cl.def("phi", (double (HepMC3::FourVector2::*)() const) &HepMC3::FourVector2::phi, "Azimuthal angle\n\nC++: HepMC3::FourVector2::phi() const --> double");
		cl.def("theta", (double (HepMC3::FourVector2::*)() const) &HepMC3::FourVector2::theta, "Polar angle w.r.t. z direction\n\nC++: HepMC3::FourVector2::theta() const --> double");
		cl.def("eta", (double (HepMC3::FourVector2::*)() const) &HepMC3::FourVector2::eta, "Pseudorapidity\n\nC++: HepMC3::FourVector2::eta() const --> double");
		cl.def("rap", (double (HepMC3::FourVector2::*)() const) &HepMC3::FourVector2::rap, "Rapidity\n\nC++: HepMC3::FourVector2::rap() const --> double");
		cl.def("abs_eta", (double (HepMC3::FourVector2::*)() const) &HepMC3::FourVector2::abs_eta, "Absolute pseudorapidity\n\nC++: HepMC3::FourVector2::abs_eta() const --> double");
		cl.def("abs_rap", (double (HepMC3::FourVector2::*)() const) &HepMC3::FourVector2::abs_rap, "Absolute rapidity\n\nC++: HepMC3::FourVector2::abs_rap() const --> double");
		cl.def("pseudoRapidity", (double (HepMC3::FourVector2::*)() const) &HepMC3::FourVector2::pseudoRapidity, "Same as eta()\n \n\n Prefer 'only one way to do it', and we don't have equivalent long names for e.g. pid, phi or eta\n\nC++: HepMC3::FourVector2::pseudoRapidity() const --> double");
		cl.def("is_zero", (bool (HepMC3::FourVector2::*)() const) &HepMC3::FourVector2::is_zero, "Check if the length of this vertex is zero\n\nC++: HepMC3::FourVector2::is_zero() const --> bool");
		cl.def("delta_phi", (double (HepMC3::FourVector2::*)(const class HepMC3::FourVector2 &) const) &HepMC3::FourVector2::delta_phi, "Signed azimuthal angle separation in [-pi, pi]\n\nC++: HepMC3::FourVector2::delta_phi(const class HepMC3::FourVector2 &) const --> double", pybind11::arg("v"));
		cl.def("delta_eta", (double (HepMC3::FourVector2::*)(const class HepMC3::FourVector2 &) const) &HepMC3::FourVector2::delta_eta, "Pseudorapidity separation\n\nC++: HepMC3::FourVector2::delta_eta(const class HepMC3::FourVector2 &) const --> double", pybind11::arg("v"));
		cl.def("delta_rap", (double (HepMC3::FourVector2::*)(const class HepMC3::FourVector2 &) const) &HepMC3::FourVector2::delta_rap, "Rapidity separation\n\nC++: HepMC3::FourVector2::delta_rap(const class HepMC3::FourVector2 &) const --> double", pybind11::arg("v"));
		cl.def("delta_r2_eta", (double (HepMC3::FourVector2::*)(const class HepMC3::FourVector2 &) const) &HepMC3::FourVector2::delta_r2_eta, "R_eta^2-distance separation dR^2 = dphi^2 + deta^2\n\nC++: HepMC3::FourVector2::delta_r2_eta(const class HepMC3::FourVector2 &) const --> double", pybind11::arg("v"));
		cl.def("delta_r_eta", (double (HepMC3::FourVector2::*)(const class HepMC3::FourVector2 &) const) &HepMC3::FourVector2::delta_r_eta, "R_eta-distance separation dR = sqrt(dphi^2 + deta^2)\n\nC++: HepMC3::FourVector2::delta_r_eta(const class HepMC3::FourVector2 &) const --> double", pybind11::arg("v"));
		cl.def("delta_r2_rap", (double (HepMC3::FourVector2::*)(const class HepMC3::FourVector2 &) const) &HepMC3::FourVector2::delta_r2_rap, "R_rap^2-distance separation dR^2 = dphi^2 + drap^2\n\nC++: HepMC3::FourVector2::delta_r2_rap(const class HepMC3::FourVector2 &) const --> double", pybind11::arg("v"));
		cl.def("delta_r_rap", (double (HepMC3::FourVector2::*)(const class HepMC3::FourVector2 &) const) &HepMC3::FourVector2::delta_r_rap, "R-rap-distance separation dR = sqrt(dphi^2 + drap^2)\n\nC++: HepMC3::FourVector2::delta_r_rap(const class HepMC3::FourVector2 &) const --> double", pybind11::arg("v"));
		cl.def("__eq__", (bool (HepMC3::FourVector2::*)(const class HepMC3::FourVector2 &) const) &HepMC3::FourVector2::operator==, "Equality\n\nC++: HepMC3::FourVector2::operator==(const class HepMC3::FourVector2 &) const --> bool", pybind11::arg("rhs"));
		cl.def("__ne__", (bool (HepMC3::FourVector2::*)(const class HepMC3::FourVector2 &) const) &HepMC3::FourVector2::operator!=, "Inequality\n\nC++: HepMC3::FourVector2::operator!=(const class HepMC3::FourVector2 &) const --> bool", pybind11::arg("rhs"));
		cl.def("__add__", (class HepMC3::FourVector2 (HepMC3::FourVector2::*)(const class HepMC3::FourVector2 &) const) &HepMC3::FourVector2::operator+, "Arithmetic operator +\n\nC++: HepMC3::FourVector2::operator+(const class HepMC3::FourVector2 &) const --> class HepMC3::FourVector2", pybind11::arg("rhs"));
		cl.def("__sub__", (class HepMC3::FourVector2 (HepMC3::FourVector2::*)(const class HepMC3::FourVector2 &) const) &HepMC3::FourVector2::operator-, "Arithmetic operator -\n\nC++: HepMC3::FourVector2::operator-(const class HepMC3::FourVector2 &) const --> class HepMC3::FourVector2", pybind11::arg("rhs"));
		cl.def("__mul__", (class HepMC3::FourVector2 (HepMC3::FourVector2::*)(const double) const) &HepMC3::FourVector2::operator*, "Arithmetic operator * by scalar\n\nC++: HepMC3::FourVector2::operator*(const double) const --> class HepMC3::FourVector2", pybind11::arg("rhs"));
		cl.def("__truediv__", (class HepMC3::FourVector2 (HepMC3::FourVector2::*)(const double) const) &HepMC3::FourVector2::operator/, "Arithmetic operator / by scalar\n\nC++: HepMC3::FourVector2::operator/(const double) const --> class HepMC3::FourVector2", pybind11::arg("rhs"));
		cl.def("__iadd__", (void (HepMC3::FourVector2::*)(const class HepMC3::FourVector2 &)) &HepMC3::FourVector2::operator+=, "Arithmetic operator +=\n\nC++: HepMC3::FourVector2::operator+=(const class HepMC3::FourVector2 &) --> void", pybind11::arg("rhs"));
		cl.def("__isub__", (void (HepMC3::FourVector2::*)(const class HepMC3::FourVector2 &)) &HepMC3::FourVector2::operator-=, "Arithmetic operator -=\n\nC++: HepMC3::FourVector2::operator-=(const class HepMC3::FourVector2 &) --> void", pybind11::arg("rhs"));
		cl.def("__imul__", (void (HepMC3::FourVector2::*)(const double)) &HepMC3::FourVector2::operator*=, "Arithmetic operator *= by scalar\n\nC++: HepMC3::FourVector2::operator*=(const double) --> void", pybind11::arg("rhs"));
		cl.def("__itruediv__", (void (HepMC3::FourVector2::*)(const double)) &HepMC3::FourVector2::operator/=, "Arithmetic operator /= by scalar\n\nC++: HepMC3::FourVector2::operator/=(const double) --> void", pybind11::arg("rhs"));
		cl.def_static("ZERO_VECTOR", (const class HepMC3::FourVector2 & (*)()) &HepMC3::FourVector2::ZERO_VECTOR, "Static null FourVector2 = (0,0,0,0)\n\nC++: HepMC3::FourVector2::ZERO_VECTOR() --> const class HepMC3::FourVector2 &", pybind11::return_value_policy::automatic);
		cl.def("assign", (class HepMC3::FourVector2 & (HepMC3::FourVector2::*)(const class HepMC3::FourVector2 &)) &HepMC3::FourVector2::operator=, "C++: HepMC3::FourVector2::operator=(const class HepMC3::FourVector2 &) --> class HepMC3::FourVector2 &", pybind11::return_value_policy::automatic, pybind11::arg(""));

		 binder::custom_FourVector_binder(cl);
	}
	// HepMC3::delta_phi(const class HepMC3::FourVector2 &, const class HepMC3::FourVector2 &) file:HepMC3/FourVector.h line:313
	M("HepMC3").def("delta_phi", (double (*)(const class HepMC3::FourVector2 &, const class HepMC3::FourVector2 &)) &HepMC3::delta_phi, "Signed azimuthal angle separation in [-pi, pi] between vecs  and \n\nC++: HepMC3::delta_phi(const class HepMC3::FourVector2 &, const class HepMC3::FourVector2 &) --> double", pybind11::arg("a"), pybind11::arg("b"));

	// HepMC3::delta_eta(const class HepMC3::FourVector2 &, const class HepMC3::FourVector2 &) file:HepMC3/FourVector.h line:316
	M("HepMC3").def("delta_eta", (double (*)(const class HepMC3::FourVector2 &, const class HepMC3::FourVector2 &)) &HepMC3::delta_eta, "Pseudorapidity separation between vecs  and \n\nC++: HepMC3::delta_eta(const class HepMC3::FourVector2 &, const class HepMC3::FourVector2 &) --> double", pybind11::arg("a"), pybind11::arg("b"));

	// HepMC3::delta_rap(const class HepMC3::FourVector2 &, const class HepMC3::FourVector2 &) file:HepMC3/FourVector.h line:319
	M("HepMC3").def("delta_rap", (double (*)(const class HepMC3::FourVector2 &, const class HepMC3::FourVector2 &)) &HepMC3::delta_rap, "Rapidity separation between vecs  and \n\nC++: HepMC3::delta_rap(const class HepMC3::FourVector2 &, const class HepMC3::FourVector2 &) --> double", pybind11::arg("a"), pybind11::arg("b"));

	// HepMC3::delta_r2_eta(const class HepMC3::FourVector2 &, const class HepMC3::FourVector2 &) file:HepMC3/FourVector.h line:322
	M("HepMC3").def("delta_r2_eta", (double (*)(const class HepMC3::FourVector2 &, const class HepMC3::FourVector2 &)) &HepMC3::delta_r2_eta, "R_eta^2-distance separation dR^2 = dphi^2 + deta^2 between vecs  and \n\nC++: HepMC3::delta_r2_eta(const class HepMC3::FourVector2 &, const class HepMC3::FourVector2 &) --> double", pybind11::arg("a"), pybind11::arg("b"));

	// HepMC3::delta_r_eta(const class HepMC3::FourVector2 &, const class HepMC3::FourVector2 &) file:HepMC3/FourVector.h line:325
	M("HepMC3").def("delta_r_eta", (double (*)(const class HepMC3::FourVector2 &, const class HepMC3::FourVector2 &)) &HepMC3::delta_r_eta, "R_eta-distance separation dR = sqrt(dphi^2 + deta^2) between vecs  and \n\nC++: HepMC3::delta_r_eta(const class HepMC3::FourVector2 &, const class HepMC3::FourVector2 &) --> double", pybind11::arg("a"), pybind11::arg("b"));

	// HepMC3::delta_r2_rap(const class HepMC3::FourVector2 &, const class HepMC3::FourVector2 &) file:HepMC3/FourVector.h line:328
	M("HepMC3").def("delta_r2_rap", (double (*)(const class HepMC3::FourVector2 &, const class HepMC3::FourVector2 &)) &HepMC3::delta_r2_rap, "R_rap^2-distance separation dR^2 = dphi^2 + drap^2 between vecs  and \n\nC++: HepMC3::delta_r2_rap(const class HepMC3::FourVector2 &, const class HepMC3::FourVector2 &) --> double", pybind11::arg("a"), pybind11::arg("b"));

	// HepMC3::delta_r_rap(const class HepMC3::FourVector2 &, const class HepMC3::FourVector2 &) file:HepMC3/FourVector.h line:331
	M("HepMC3").def("delta_r_rap", (double (*)(const class HepMC3::FourVector2 &, const class HepMC3::FourVector2 &)) &HepMC3::delta_r_rap, "R_rap-distance separation dR = sqrt(dphi^2 + drap^2) between vecs  and \n\nC++: HepMC3::delta_r_rap(const class HepMC3::FourVector2 &, const class HepMC3::FourVector2 &) --> double", pybind11::arg("a"), pybind11::arg("b"));

}
