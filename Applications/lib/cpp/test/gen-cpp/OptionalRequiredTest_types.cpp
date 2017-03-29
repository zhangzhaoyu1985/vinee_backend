/**
 * Autogenerated by Thrift Compiler (1.0.0-dev)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "OptionalRequiredTest_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace thrift { namespace test {


OldSchool::~OldSchool() throw() {
}


void OldSchool::__set_im_int(const int16_t val) {
  this->im_int = val;
}

void OldSchool::__set_im_str(const std::string& val) {
  this->im_str = val;
}

void OldSchool::__set_im_big(const std::vector<std::map<int32_t, std::string> > & val) {
  this->im_big = val;
}

uint32_t OldSchool::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->im_int);
          this->__isset.im_int = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->im_str);
          this->__isset.im_str = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->im_big.clear();
            uint32_t _size0;
            ::apache::thrift::protocol::TType _etype3;
            xfer += iprot->readListBegin(_etype3, _size0);
            this->im_big.resize(_size0);
            uint32_t _i4;
            for (_i4 = 0; _i4 < _size0; ++_i4)
            {
              {
                this->im_big[_i4].clear();
                uint32_t _size5;
                ::apache::thrift::protocol::TType _ktype6;
                ::apache::thrift::protocol::TType _vtype7;
                xfer += iprot->readMapBegin(_ktype6, _vtype7, _size5);
                uint32_t _i9;
                for (_i9 = 0; _i9 < _size5; ++_i9)
                {
                  int32_t _key10;
                  xfer += iprot->readI32(_key10);
                  std::string& _val11 = this->im_big[_i4][_key10];
                  xfer += iprot->readString(_val11);
                }
                xfer += iprot->readMapEnd();
              }
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.im_big = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t OldSchool::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("OldSchool");

  xfer += oprot->writeFieldBegin("im_int", ::apache::thrift::protocol::T_I16, 1);
  xfer += oprot->writeI16(this->im_int);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("im_str", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->im_str);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("im_big", ::apache::thrift::protocol::T_LIST, 3);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_MAP, static_cast<uint32_t>(this->im_big.size()));
    std::vector<std::map<int32_t, std::string> > ::const_iterator _iter12;
    for (_iter12 = this->im_big.begin(); _iter12 != this->im_big.end(); ++_iter12)
    {
      {
        xfer += oprot->writeMapBegin(::apache::thrift::protocol::T_I32, ::apache::thrift::protocol::T_STRING, static_cast<uint32_t>((*_iter12).size()));
        std::map<int32_t, std::string> ::const_iterator _iter13;
        for (_iter13 = (*_iter12).begin(); _iter13 != (*_iter12).end(); ++_iter13)
        {
          xfer += oprot->writeI32(_iter13->first);
          xfer += oprot->writeString(_iter13->second);
        }
        xfer += oprot->writeMapEnd();
      }
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(OldSchool &a, OldSchool &b) {
  using ::std::swap;
  swap(a.im_int, b.im_int);
  swap(a.im_str, b.im_str);
  swap(a.im_big, b.im_big);
  swap(a.__isset, b.__isset);
}

OldSchool::OldSchool(const OldSchool& other14) {
  im_int = other14.im_int;
  im_str = other14.im_str;
  im_big = other14.im_big;
  __isset = other14.__isset;
}
OldSchool& OldSchool::operator=(const OldSchool& other15) {
  im_int = other15.im_int;
  im_str = other15.im_str;
  im_big = other15.im_big;
  __isset = other15.__isset;
  return *this;
}
void OldSchool::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "OldSchool(";
  out << "im_int=" << to_string(im_int);
  out << ", " << "im_str=" << to_string(im_str);
  out << ", " << "im_big=" << to_string(im_big);
  out << ")";
}


Simple::~Simple() throw() {
}


void Simple::__set_im_default(const int16_t val) {
  this->im_default = val;
}

void Simple::__set_im_required(const int16_t val) {
  this->im_required = val;
}

void Simple::__set_im_optional(const int16_t val) {
  this->im_optional = val;
__isset.im_optional = true;
}

uint32_t Simple::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_im_required = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->im_default);
          this->__isset.im_default = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->im_required);
          isset_im_required = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->im_optional);
          this->__isset.im_optional = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_im_required)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t Simple::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Simple");

  xfer += oprot->writeFieldBegin("im_default", ::apache::thrift::protocol::T_I16, 1);
  xfer += oprot->writeI16(this->im_default);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("im_required", ::apache::thrift::protocol::T_I16, 2);
  xfer += oprot->writeI16(this->im_required);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.im_optional) {
    xfer += oprot->writeFieldBegin("im_optional", ::apache::thrift::protocol::T_I16, 3);
    xfer += oprot->writeI16(this->im_optional);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Simple &a, Simple &b) {
  using ::std::swap;
  swap(a.im_default, b.im_default);
  swap(a.im_required, b.im_required);
  swap(a.im_optional, b.im_optional);
  swap(a.__isset, b.__isset);
}

Simple::Simple(const Simple& other16) {
  im_default = other16.im_default;
  im_required = other16.im_required;
  im_optional = other16.im_optional;
  __isset = other16.__isset;
}
Simple& Simple::operator=(const Simple& other17) {
  im_default = other17.im_default;
  im_required = other17.im_required;
  im_optional = other17.im_optional;
  __isset = other17.__isset;
  return *this;
}
void Simple::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Simple(";
  out << "im_default=" << to_string(im_default);
  out << ", " << "im_required=" << to_string(im_required);
  out << ", " << "im_optional="; (__isset.im_optional ? (out << to_string(im_optional)) : (out << "<null>"));
  out << ")";
}


Tricky1::~Tricky1() throw() {
}


void Tricky1::__set_im_default(const int16_t val) {
  this->im_default = val;
}

uint32_t Tricky1::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->im_default);
          this->__isset.im_default = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Tricky1::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Tricky1");

  xfer += oprot->writeFieldBegin("im_default", ::apache::thrift::protocol::T_I16, 1);
  xfer += oprot->writeI16(this->im_default);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Tricky1 &a, Tricky1 &b) {
  using ::std::swap;
  swap(a.im_default, b.im_default);
  swap(a.__isset, b.__isset);
}

Tricky1::Tricky1(const Tricky1& other18) {
  im_default = other18.im_default;
  __isset = other18.__isset;
}
Tricky1& Tricky1::operator=(const Tricky1& other19) {
  im_default = other19.im_default;
  __isset = other19.__isset;
  return *this;
}
void Tricky1::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Tricky1(";
  out << "im_default=" << to_string(im_default);
  out << ")";
}


Tricky2::~Tricky2() throw() {
}


void Tricky2::__set_im_optional(const int16_t val) {
  this->im_optional = val;
__isset.im_optional = true;
}

uint32_t Tricky2::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->im_optional);
          this->__isset.im_optional = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Tricky2::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Tricky2");

  if (this->__isset.im_optional) {
    xfer += oprot->writeFieldBegin("im_optional", ::apache::thrift::protocol::T_I16, 1);
    xfer += oprot->writeI16(this->im_optional);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Tricky2 &a, Tricky2 &b) {
  using ::std::swap;
  swap(a.im_optional, b.im_optional);
  swap(a.__isset, b.__isset);
}

Tricky2::Tricky2(const Tricky2& other20) {
  im_optional = other20.im_optional;
  __isset = other20.__isset;
}
Tricky2& Tricky2::operator=(const Tricky2& other21) {
  im_optional = other21.im_optional;
  __isset = other21.__isset;
  return *this;
}
void Tricky2::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Tricky2(";
  out << "im_optional="; (__isset.im_optional ? (out << to_string(im_optional)) : (out << "<null>"));
  out << ")";
}


Tricky3::~Tricky3() throw() {
}


void Tricky3::__set_im_required(const int16_t val) {
  this->im_required = val;
}

uint32_t Tricky3::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_im_required = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->im_required);
          isset_im_required = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_im_required)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t Tricky3::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Tricky3");

  xfer += oprot->writeFieldBegin("im_required", ::apache::thrift::protocol::T_I16, 1);
  xfer += oprot->writeI16(this->im_required);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Tricky3 &a, Tricky3 &b) {
  using ::std::swap;
  swap(a.im_required, b.im_required);
}

Tricky3::Tricky3(const Tricky3& other22) {
  im_required = other22.im_required;
}
Tricky3& Tricky3::operator=(const Tricky3& other23) {
  im_required = other23.im_required;
  return *this;
}
void Tricky3::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Tricky3(";
  out << "im_required=" << to_string(im_required);
  out << ")";
}


OptionalDefault::~OptionalDefault() throw() {
}


void OptionalDefault::__set_opt_int(const int16_t val) {
  this->opt_int = val;
__isset.opt_int = true;
}

void OptionalDefault::__set_opt_str(const std::string& val) {
  this->opt_str = val;
__isset.opt_str = true;
}

uint32_t OptionalDefault::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->opt_int);
          this->__isset.opt_int = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->opt_str);
          this->__isset.opt_str = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t OptionalDefault::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("OptionalDefault");

  if (this->__isset.opt_int) {
    xfer += oprot->writeFieldBegin("opt_int", ::apache::thrift::protocol::T_I16, 1);
    xfer += oprot->writeI16(this->opt_int);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.opt_str) {
    xfer += oprot->writeFieldBegin("opt_str", ::apache::thrift::protocol::T_STRING, 2);
    xfer += oprot->writeString(this->opt_str);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(OptionalDefault &a, OptionalDefault &b) {
  using ::std::swap;
  swap(a.opt_int, b.opt_int);
  swap(a.opt_str, b.opt_str);
  swap(a.__isset, b.__isset);
}

OptionalDefault::OptionalDefault(const OptionalDefault& other24) {
  opt_int = other24.opt_int;
  opt_str = other24.opt_str;
  __isset = other24.__isset;
}
OptionalDefault& OptionalDefault::operator=(const OptionalDefault& other25) {
  opt_int = other25.opt_int;
  opt_str = other25.opt_str;
  __isset = other25.__isset;
  return *this;
}
void OptionalDefault::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "OptionalDefault(";
  out << "opt_int="; (__isset.opt_int ? (out << to_string(opt_int)) : (out << "<null>"));
  out << ", " << "opt_str="; (__isset.opt_str ? (out << to_string(opt_str)) : (out << "<null>"));
  out << ")";
}


Complex::~Complex() throw() {
}


void Complex::__set_cp_default(const int16_t val) {
  this->cp_default = val;
}

void Complex::__set_cp_required(const int16_t val) {
  this->cp_required = val;
}

void Complex::__set_cp_optional(const int16_t val) {
  this->cp_optional = val;
__isset.cp_optional = true;
}

void Complex::__set_the_map(const std::map<int16_t, Simple> & val) {
  this->the_map = val;
}

void Complex::__set_req_simp(const Simple& val) {
  this->req_simp = val;
}

void Complex::__set_opt_simp(const Simple& val) {
  this->opt_simp = val;
__isset.opt_simp = true;
}

uint32_t Complex::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_cp_required = false;
  bool isset_req_simp = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->cp_default);
          this->__isset.cp_default = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->cp_required);
          isset_cp_required = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->cp_optional);
          this->__isset.cp_optional = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_MAP) {
          {
            this->the_map.clear();
            uint32_t _size26;
            ::apache::thrift::protocol::TType _ktype27;
            ::apache::thrift::protocol::TType _vtype28;
            xfer += iprot->readMapBegin(_ktype27, _vtype28, _size26);
            uint32_t _i30;
            for (_i30 = 0; _i30 < _size26; ++_i30)
            {
              int16_t _key31;
              xfer += iprot->readI16(_key31);
              Simple& _val32 = this->the_map[_key31];
              xfer += _val32.read(iprot);
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.the_map = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->req_simp.read(iprot);
          isset_req_simp = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->opt_simp.read(iprot);
          this->__isset.opt_simp = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_cp_required)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_req_simp)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t Complex::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Complex");

  xfer += oprot->writeFieldBegin("cp_default", ::apache::thrift::protocol::T_I16, 1);
  xfer += oprot->writeI16(this->cp_default);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("cp_required", ::apache::thrift::protocol::T_I16, 2);
  xfer += oprot->writeI16(this->cp_required);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.cp_optional) {
    xfer += oprot->writeFieldBegin("cp_optional", ::apache::thrift::protocol::T_I16, 3);
    xfer += oprot->writeI16(this->cp_optional);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldBegin("the_map", ::apache::thrift::protocol::T_MAP, 4);
  {
    xfer += oprot->writeMapBegin(::apache::thrift::protocol::T_I16, ::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->the_map.size()));
    std::map<int16_t, Simple> ::const_iterator _iter33;
    for (_iter33 = this->the_map.begin(); _iter33 != this->the_map.end(); ++_iter33)
    {
      xfer += oprot->writeI16(_iter33->first);
      xfer += _iter33->second.write(oprot);
    }
    xfer += oprot->writeMapEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("req_simp", ::apache::thrift::protocol::T_STRUCT, 5);
  xfer += this->req_simp.write(oprot);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.opt_simp) {
    xfer += oprot->writeFieldBegin("opt_simp", ::apache::thrift::protocol::T_STRUCT, 6);
    xfer += this->opt_simp.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Complex &a, Complex &b) {
  using ::std::swap;
  swap(a.cp_default, b.cp_default);
  swap(a.cp_required, b.cp_required);
  swap(a.cp_optional, b.cp_optional);
  swap(a.the_map, b.the_map);
  swap(a.req_simp, b.req_simp);
  swap(a.opt_simp, b.opt_simp);
  swap(a.__isset, b.__isset);
}

Complex::Complex(const Complex& other34) {
  cp_default = other34.cp_default;
  cp_required = other34.cp_required;
  cp_optional = other34.cp_optional;
  the_map = other34.the_map;
  req_simp = other34.req_simp;
  opt_simp = other34.opt_simp;
  __isset = other34.__isset;
}
Complex& Complex::operator=(const Complex& other35) {
  cp_default = other35.cp_default;
  cp_required = other35.cp_required;
  cp_optional = other35.cp_optional;
  the_map = other35.the_map;
  req_simp = other35.req_simp;
  opt_simp = other35.opt_simp;
  __isset = other35.__isset;
  return *this;
}
void Complex::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Complex(";
  out << "cp_default=" << to_string(cp_default);
  out << ", " << "cp_required=" << to_string(cp_required);
  out << ", " << "cp_optional="; (__isset.cp_optional ? (out << to_string(cp_optional)) : (out << "<null>"));
  out << ", " << "the_map=" << to_string(the_map);
  out << ", " << "req_simp=" << to_string(req_simp);
  out << ", " << "opt_simp="; (__isset.opt_simp ? (out << to_string(opt_simp)) : (out << "<null>"));
  out << ")";
}


ManyOpt::~ManyOpt() throw() {
}


void ManyOpt::__set_opt1(const int32_t val) {
  this->opt1 = val;
__isset.opt1 = true;
}

void ManyOpt::__set_opt2(const int32_t val) {
  this->opt2 = val;
__isset.opt2 = true;
}

void ManyOpt::__set_opt3(const int32_t val) {
  this->opt3 = val;
__isset.opt3 = true;
}

void ManyOpt::__set_def4(const int32_t val) {
  this->def4 = val;
}

void ManyOpt::__set_opt5(const int32_t val) {
  this->opt5 = val;
__isset.opt5 = true;
}

void ManyOpt::__set_opt6(const int32_t val) {
  this->opt6 = val;
__isset.opt6 = true;
}

uint32_t ManyOpt::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->opt1);
          this->__isset.opt1 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->opt2);
          this->__isset.opt2 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->opt3);
          this->__isset.opt3 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->def4);
          this->__isset.def4 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->opt5);
          this->__isset.opt5 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->opt6);
          this->__isset.opt6 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t ManyOpt::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("ManyOpt");

  if (this->__isset.opt1) {
    xfer += oprot->writeFieldBegin("opt1", ::apache::thrift::protocol::T_I32, 1);
    xfer += oprot->writeI32(this->opt1);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.opt2) {
    xfer += oprot->writeFieldBegin("opt2", ::apache::thrift::protocol::T_I32, 2);
    xfer += oprot->writeI32(this->opt2);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.opt3) {
    xfer += oprot->writeFieldBegin("opt3", ::apache::thrift::protocol::T_I32, 3);
    xfer += oprot->writeI32(this->opt3);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldBegin("def4", ::apache::thrift::protocol::T_I32, 4);
  xfer += oprot->writeI32(this->def4);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.opt5) {
    xfer += oprot->writeFieldBegin("opt5", ::apache::thrift::protocol::T_I32, 5);
    xfer += oprot->writeI32(this->opt5);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.opt6) {
    xfer += oprot->writeFieldBegin("opt6", ::apache::thrift::protocol::T_I32, 6);
    xfer += oprot->writeI32(this->opt6);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(ManyOpt &a, ManyOpt &b) {
  using ::std::swap;
  swap(a.opt1, b.opt1);
  swap(a.opt2, b.opt2);
  swap(a.opt3, b.opt3);
  swap(a.def4, b.def4);
  swap(a.opt5, b.opt5);
  swap(a.opt6, b.opt6);
  swap(a.__isset, b.__isset);
}

ManyOpt::ManyOpt(const ManyOpt& other36) {
  opt1 = other36.opt1;
  opt2 = other36.opt2;
  opt3 = other36.opt3;
  def4 = other36.def4;
  opt5 = other36.opt5;
  opt6 = other36.opt6;
  __isset = other36.__isset;
}
ManyOpt& ManyOpt::operator=(const ManyOpt& other37) {
  opt1 = other37.opt1;
  opt2 = other37.opt2;
  opt3 = other37.opt3;
  def4 = other37.def4;
  opt5 = other37.opt5;
  opt6 = other37.opt6;
  __isset = other37.__isset;
  return *this;
}
void ManyOpt::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "ManyOpt(";
  out << "opt1="; (__isset.opt1 ? (out << to_string(opt1)) : (out << "<null>"));
  out << ", " << "opt2="; (__isset.opt2 ? (out << to_string(opt2)) : (out << "<null>"));
  out << ", " << "opt3="; (__isset.opt3 ? (out << to_string(opt3)) : (out << "<null>"));
  out << ", " << "def4=" << to_string(def4);
  out << ", " << "opt5="; (__isset.opt5 ? (out << to_string(opt5)) : (out << "<null>"));
  out << ", " << "opt6="; (__isset.opt6 ? (out << to_string(opt6)) : (out << "<null>"));
  out << ")";
}


JavaTestHelper::~JavaTestHelper() throw() {
}


void JavaTestHelper::__set_req_int(const int32_t val) {
  this->req_int = val;
}

void JavaTestHelper::__set_opt_int(const int32_t val) {
  this->opt_int = val;
__isset.opt_int = true;
}

void JavaTestHelper::__set_req_obj(const std::string& val) {
  this->req_obj = val;
}

void JavaTestHelper::__set_opt_obj(const std::string& val) {
  this->opt_obj = val;
__isset.opt_obj = true;
}

void JavaTestHelper::__set_req_bin(const std::string& val) {
  this->req_bin = val;
}

void JavaTestHelper::__set_opt_bin(const std::string& val) {
  this->opt_bin = val;
__isset.opt_bin = true;
}

uint32_t JavaTestHelper::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_req_int = false;
  bool isset_req_obj = false;
  bool isset_req_bin = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->req_int);
          isset_req_int = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->opt_int);
          this->__isset.opt_int = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->req_obj);
          isset_req_obj = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->opt_obj);
          this->__isset.opt_obj = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readBinary(this->req_bin);
          isset_req_bin = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readBinary(this->opt_bin);
          this->__isset.opt_bin = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_req_int)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_req_obj)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_req_bin)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t JavaTestHelper::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("JavaTestHelper");

  xfer += oprot->writeFieldBegin("req_int", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->req_int);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.opt_int) {
    xfer += oprot->writeFieldBegin("opt_int", ::apache::thrift::protocol::T_I32, 2);
    xfer += oprot->writeI32(this->opt_int);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldBegin("req_obj", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->req_obj);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.opt_obj) {
    xfer += oprot->writeFieldBegin("opt_obj", ::apache::thrift::protocol::T_STRING, 4);
    xfer += oprot->writeString(this->opt_obj);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldBegin("req_bin", ::apache::thrift::protocol::T_STRING, 5);
  xfer += oprot->writeBinary(this->req_bin);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.opt_bin) {
    xfer += oprot->writeFieldBegin("opt_bin", ::apache::thrift::protocol::T_STRING, 6);
    xfer += oprot->writeBinary(this->opt_bin);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(JavaTestHelper &a, JavaTestHelper &b) {
  using ::std::swap;
  swap(a.req_int, b.req_int);
  swap(a.opt_int, b.opt_int);
  swap(a.req_obj, b.req_obj);
  swap(a.opt_obj, b.opt_obj);
  swap(a.req_bin, b.req_bin);
  swap(a.opt_bin, b.opt_bin);
  swap(a.__isset, b.__isset);
}

JavaTestHelper::JavaTestHelper(const JavaTestHelper& other38) {
  req_int = other38.req_int;
  opt_int = other38.opt_int;
  req_obj = other38.req_obj;
  opt_obj = other38.opt_obj;
  req_bin = other38.req_bin;
  opt_bin = other38.opt_bin;
  __isset = other38.__isset;
}
JavaTestHelper& JavaTestHelper::operator=(const JavaTestHelper& other39) {
  req_int = other39.req_int;
  opt_int = other39.opt_int;
  req_obj = other39.req_obj;
  opt_obj = other39.opt_obj;
  req_bin = other39.req_bin;
  opt_bin = other39.opt_bin;
  __isset = other39.__isset;
  return *this;
}
void JavaTestHelper::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "JavaTestHelper(";
  out << "req_int=" << to_string(req_int);
  out << ", " << "opt_int="; (__isset.opt_int ? (out << to_string(opt_int)) : (out << "<null>"));
  out << ", " << "req_obj=" << to_string(req_obj);
  out << ", " << "opt_obj="; (__isset.opt_obj ? (out << to_string(opt_obj)) : (out << "<null>"));
  out << ", " << "req_bin=" << to_string(req_bin);
  out << ", " << "opt_bin="; (__isset.opt_bin ? (out << to_string(opt_bin)) : (out << "<null>"));
  out << ")";
}


Binaries::~Binaries() throw() {
}


void Binaries::__set_bin(const std::string& val) {
  this->bin = val;
}

void Binaries::__set_req_bin(const std::string& val) {
  this->req_bin = val;
}

void Binaries::__set_opt_bin(const std::string& val) {
  this->opt_bin = val;
__isset.opt_bin = true;
}

uint32_t Binaries::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_req_bin = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readBinary(this->bin);
          this->__isset.bin = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readBinary(this->req_bin);
          isset_req_bin = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readBinary(this->opt_bin);
          this->__isset.opt_bin = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_req_bin)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t Binaries::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Binaries");

  xfer += oprot->writeFieldBegin("bin", ::apache::thrift::protocol::T_STRING, 4);
  xfer += oprot->writeBinary(this->bin);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("req_bin", ::apache::thrift::protocol::T_STRING, 5);
  xfer += oprot->writeBinary(this->req_bin);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.opt_bin) {
    xfer += oprot->writeFieldBegin("opt_bin", ::apache::thrift::protocol::T_STRING, 6);
    xfer += oprot->writeBinary(this->opt_bin);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Binaries &a, Binaries &b) {
  using ::std::swap;
  swap(a.bin, b.bin);
  swap(a.req_bin, b.req_bin);
  swap(a.opt_bin, b.opt_bin);
  swap(a.__isset, b.__isset);
}

Binaries::Binaries(const Binaries& other40) {
  bin = other40.bin;
  req_bin = other40.req_bin;
  opt_bin = other40.opt_bin;
  __isset = other40.__isset;
}
Binaries& Binaries::operator=(const Binaries& other41) {
  bin = other41.bin;
  req_bin = other41.req_bin;
  opt_bin = other41.opt_bin;
  __isset = other41.__isset;
  return *this;
}
void Binaries::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Binaries(";
  out << "bin=" << to_string(bin);
  out << ", " << "req_bin=" << to_string(req_bin);
  out << ", " << "opt_bin="; (__isset.opt_bin ? (out << to_string(opt_bin)) : (out << "<null>"));
  out << ")";
}

}} // namespace
