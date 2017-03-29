/**
 * Autogenerated by Thrift Compiler (1.0.0-dev)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef EnumTest_TYPES_H
#define EnumTest_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/TBase.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>




struct MyEnum1 {
  enum type {
    ME1_0 = 0,
    ME1_1 = 1,
    ME1_2 = 2,
    ME1_3 = 3,
    ME1_5 = 5,
    ME1_6 = 6
  };
};

extern const std::map<int, const char*> _MyEnum1_VALUES_TO_NAMES;

struct MyEnum2 {
  enum type {
    ME2_0 = 0,
    ME2_1 = 1,
    ME2_2 = 2
  };
};

extern const std::map<int, const char*> _MyEnum2_VALUES_TO_NAMES;

struct MyEnum2_again {
  enum type {
    ME0_1 = 0,
    ME1_1 = 1,
    ME2_1 = 2,
    ME3_1 = 3
  };
};

extern const std::map<int, const char*> _MyEnum2_again_VALUES_TO_NAMES;

struct MyEnum3 {
  enum type {
    ME3_0 = 0,
    ME3_1 = 1,
    ME3_N2 = -2,
    ME3_N1 = -1,
    ME3_D0 = 0,
    ME3_D1 = 1,
    ME3_9 = 9,
    ME3_10 = 10
  };
};

extern const std::map<int, const char*> _MyEnum3_VALUES_TO_NAMES;

struct MyEnum4 {
  enum type {
    ME4_A = 2147483645,
    ME4_B = 2147483646,
    ME4_C = 2147483647
  };
};

extern const std::map<int, const char*> _MyEnum4_VALUES_TO_NAMES;

struct MyEnum5 {
  enum type {
    e1 = 0,
    e2 = 42
  };
};

extern const std::map<int, const char*> _MyEnum5_VALUES_TO_NAMES;

class MyStruct;

class EnumTestStruct;

typedef struct _MyStruct__isset {
  _MyStruct__isset() : me2_2(true), me3_n2(true), me3_d1(true) {}
  bool me2_2 :1;
  bool me3_n2 :1;
  bool me3_d1 :1;
} _MyStruct__isset;

class MyStruct : public virtual ::apache::thrift::TBase {
 public:

  MyStruct(const MyStruct&);
  MyStruct& operator=(const MyStruct&);
  MyStruct() : me2_2((MyEnum2::type)2), me3_n2((MyEnum3::type)-2), me3_d1((MyEnum3::type)1) {
    me2_2 = (MyEnum2::type)2;

    me3_n2 = (MyEnum3::type)-2;

    me3_d1 = (MyEnum3::type)1;

  }

  virtual ~MyStruct() throw();
  MyEnum2::type me2_2;
  MyEnum3::type me3_n2;
  MyEnum3::type me3_d1;

  _MyStruct__isset __isset;

  void __set_me2_2(const MyEnum2::type val);

  void __set_me3_n2(const MyEnum3::type val);

  void __set_me3_d1(const MyEnum3::type val);

  bool operator == (const MyStruct & rhs) const
  {
    if (!(me2_2 == rhs.me2_2))
      return false;
    if (!(me3_n2 == rhs.me3_n2))
      return false;
    if (!(me3_d1 == rhs.me3_d1))
      return false;
    return true;
  }
  bool operator != (const MyStruct &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MyStruct & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(MyStruct &a, MyStruct &b);

inline std::ostream& operator<<(std::ostream& out, const MyStruct& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _EnumTestStruct__isset {
  _EnumTestStruct__isset() : a_enum(false), enum_list(false), enum_set(false), enum_enum_map(false), list_enum_map(false), set_enum_map(false), map_enum_map(false), enum_map_map(false), enum_set_map(false), enum_list_map(false) {}
  bool a_enum :1;
  bool enum_list :1;
  bool enum_set :1;
  bool enum_enum_map :1;
  bool list_enum_map :1;
  bool set_enum_map :1;
  bool map_enum_map :1;
  bool enum_map_map :1;
  bool enum_set_map :1;
  bool enum_list_map :1;
} _EnumTestStruct__isset;

class EnumTestStruct : public virtual ::apache::thrift::TBase {
 public:

  EnumTestStruct(const EnumTestStruct&);
  EnumTestStruct& operator=(const EnumTestStruct&);
  EnumTestStruct() : a_enum((MyEnum3::type)0) {
  }

  virtual ~EnumTestStruct() throw();
  MyEnum3::type a_enum;
  std::vector<MyEnum3::type>  enum_list;
  std::set<MyEnum3::type>  enum_set;
  std::map<MyEnum3::type, MyEnum3::type>  enum_enum_map;
  std::map<std::vector<MyEnum3::type> , MyEnum3::type>  list_enum_map;
  std::map<std::set<MyEnum3::type> , MyEnum3::type>  set_enum_map;
  std::map<std::map<MyEnum3::type, MyEnum3::type> , MyEnum3::type>  map_enum_map;
  std::map<MyEnum3::type, std::map<MyEnum3::type, MyEnum3::type> >  enum_map_map;
  std::map<MyEnum3::type, std::set<MyEnum3::type> >  enum_set_map;
  std::map<MyEnum3::type, std::vector<MyEnum3::type> >  enum_list_map;

  _EnumTestStruct__isset __isset;

  void __set_a_enum(const MyEnum3::type val);

  void __set_enum_list(const std::vector<MyEnum3::type> & val);

  void __set_enum_set(const std::set<MyEnum3::type> & val);

  void __set_enum_enum_map(const std::map<MyEnum3::type, MyEnum3::type> & val);

  void __set_list_enum_map(const std::map<std::vector<MyEnum3::type> , MyEnum3::type> & val);

  void __set_set_enum_map(const std::map<std::set<MyEnum3::type> , MyEnum3::type> & val);

  void __set_map_enum_map(const std::map<std::map<MyEnum3::type, MyEnum3::type> , MyEnum3::type> & val);

  void __set_enum_map_map(const std::map<MyEnum3::type, std::map<MyEnum3::type, MyEnum3::type> > & val);

  void __set_enum_set_map(const std::map<MyEnum3::type, std::set<MyEnum3::type> > & val);

  void __set_enum_list_map(const std::map<MyEnum3::type, std::vector<MyEnum3::type> > & val);

  bool operator == (const EnumTestStruct & rhs) const
  {
    if (!(a_enum == rhs.a_enum))
      return false;
    if (!(enum_list == rhs.enum_list))
      return false;
    if (!(enum_set == rhs.enum_set))
      return false;
    if (!(enum_enum_map == rhs.enum_enum_map))
      return false;
    if (!(list_enum_map == rhs.list_enum_map))
      return false;
    if (!(set_enum_map == rhs.set_enum_map))
      return false;
    if (!(map_enum_map == rhs.map_enum_map))
      return false;
    if (!(enum_map_map == rhs.enum_map_map))
      return false;
    if (!(enum_set_map == rhs.enum_set_map))
      return false;
    if (!(enum_list_map == rhs.enum_list_map))
      return false;
    return true;
  }
  bool operator != (const EnumTestStruct &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const EnumTestStruct & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(EnumTestStruct &a, EnumTestStruct &b);

inline std::ostream& operator<<(std::ostream& out, const EnumTestStruct& obj)
{
  obj.printTo(out);
  return out;
}



#endif
