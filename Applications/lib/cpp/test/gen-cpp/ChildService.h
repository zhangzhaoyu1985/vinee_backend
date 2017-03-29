/**
 * Autogenerated by Thrift Compiler (1.0.0-dev)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef ChildService_H
#define ChildService_H

#include <thrift/transport/TBufferTransports.h>
#include <thrift/cxxfunctional.h>
namespace apache { namespace thrift { namespace async {
class TAsyncChannel;
}}}
#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TAsyncDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include "proc_types.h"
#include "ParentService.h"

namespace apache { namespace thrift { namespace test {

#ifdef _WIN32
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class ChildServiceIf : virtual public ParentServiceIf {
 public:
  virtual ~ChildServiceIf() {}
  virtual int32_t setValue(const int32_t value) = 0;
  virtual int32_t getValue() = 0;
};

class ChildServiceIfFactory : virtual public ParentServiceIfFactory {
 public:
  typedef ChildServiceIf Handler;

  virtual ~ChildServiceIfFactory() {}

  virtual ChildServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(ParentServiceIf* /* handler */) = 0;
};

class ChildServiceIfSingletonFactory : virtual public ChildServiceIfFactory {
 public:
  ChildServiceIfSingletonFactory(const boost::shared_ptr<ChildServiceIf>& iface) : iface_(iface) {}
  virtual ~ChildServiceIfSingletonFactory() {}

  virtual ChildServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(ParentServiceIf* /* handler */) {}

 protected:
  boost::shared_ptr<ChildServiceIf> iface_;
};

class ChildServiceNull : virtual public ChildServiceIf , virtual public ParentServiceNull {
 public:
  virtual ~ChildServiceNull() {}
  int32_t setValue(const int32_t /* value */) {
    int32_t _return = 0;
    return _return;
  }
  int32_t getValue() {
    int32_t _return = 0;
    return _return;
  }
};

typedef struct _ChildService_setValue_args__isset {
  _ChildService_setValue_args__isset() : value(false) {}
  bool value :1;
} _ChildService_setValue_args__isset;

class ChildService_setValue_args {
 public:

  ChildService_setValue_args(const ChildService_setValue_args&);
  ChildService_setValue_args& operator=(const ChildService_setValue_args&);
  ChildService_setValue_args() : value(0) {
  }

  virtual ~ChildService_setValue_args() throw();
  int32_t value;

  _ChildService_setValue_args__isset __isset;

  void __set_value(const int32_t val);

  bool operator == (const ChildService_setValue_args & rhs) const
  {
    if (!(value == rhs.value))
      return false;
    return true;
  }
  bool operator != (const ChildService_setValue_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ChildService_setValue_args & ) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t write(Protocol_* oprot) const;

};


class ChildService_setValue_pargs {
 public:


  virtual ~ChildService_setValue_pargs() throw();
  const int32_t* value;

  template <class Protocol_>
  uint32_t write(Protocol_* oprot) const;

};

typedef struct _ChildService_setValue_result__isset {
  _ChildService_setValue_result__isset() : success(false) {}
  bool success :1;
} _ChildService_setValue_result__isset;

class ChildService_setValue_result {
 public:

  ChildService_setValue_result(const ChildService_setValue_result&);
  ChildService_setValue_result& operator=(const ChildService_setValue_result&);
  ChildService_setValue_result() : success(0) {
  }

  virtual ~ChildService_setValue_result() throw();
  int32_t success;

  _ChildService_setValue_result__isset __isset;

  void __set_success(const int32_t val);

  bool operator == (const ChildService_setValue_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const ChildService_setValue_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ChildService_setValue_result & ) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t write(Protocol_* oprot) const;

};

typedef struct _ChildService_setValue_presult__isset {
  _ChildService_setValue_presult__isset() : success(false) {}
  bool success :1;
} _ChildService_setValue_presult__isset;

class ChildService_setValue_presult {
 public:


  virtual ~ChildService_setValue_presult() throw();
  int32_t* success;

  _ChildService_setValue_presult__isset __isset;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t write(Protocol_* oprot) const;

};


class ChildService_getValue_args {
 public:

  ChildService_getValue_args(const ChildService_getValue_args&);
  ChildService_getValue_args& operator=(const ChildService_getValue_args&);
  ChildService_getValue_args() {
  }

  virtual ~ChildService_getValue_args() throw();

  bool operator == (const ChildService_getValue_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const ChildService_getValue_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ChildService_getValue_args & ) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t write(Protocol_* oprot) const;

};


class ChildService_getValue_pargs {
 public:


  virtual ~ChildService_getValue_pargs() throw();

  template <class Protocol_>
  uint32_t write(Protocol_* oprot) const;

};

typedef struct _ChildService_getValue_result__isset {
  _ChildService_getValue_result__isset() : success(false) {}
  bool success :1;
} _ChildService_getValue_result__isset;

class ChildService_getValue_result {
 public:

  ChildService_getValue_result(const ChildService_getValue_result&);
  ChildService_getValue_result& operator=(const ChildService_getValue_result&);
  ChildService_getValue_result() : success(0) {
  }

  virtual ~ChildService_getValue_result() throw();
  int32_t success;

  _ChildService_getValue_result__isset __isset;

  void __set_success(const int32_t val);

  bool operator == (const ChildService_getValue_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const ChildService_getValue_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ChildService_getValue_result & ) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t write(Protocol_* oprot) const;

};

typedef struct _ChildService_getValue_presult__isset {
  _ChildService_getValue_presult__isset() : success(false) {}
  bool success :1;
} _ChildService_getValue_presult__isset;

class ChildService_getValue_presult {
 public:


  virtual ~ChildService_getValue_presult() throw();
  int32_t* success;

  _ChildService_getValue_presult__isset __isset;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t write(Protocol_* oprot) const;

};

template <class Protocol_>
class ChildServiceClientT : virtual public ChildServiceIf, public ParentServiceClientT<Protocol_> {
 public:
  ChildServiceClientT(boost::shared_ptr< Protocol_> prot) :
    ParentServiceClientT<Protocol_>(prot, prot) {}
  ChildServiceClientT(boost::shared_ptr< Protocol_> iprot, boost::shared_ptr< Protocol_> oprot) :    ParentServiceClientT<Protocol_>(iprot, oprot) {}
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return this->piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return this->poprot_;
  }
  int32_t setValue(const int32_t value);
  void send_setValue(const int32_t value);
  int32_t recv_setValue();
  int32_t getValue();
  void send_getValue();
  int32_t recv_getValue();
};

typedef ChildServiceClientT< ::apache::thrift::protocol::TProtocol> ChildServiceClient;

template <class Protocol_>
class ChildServiceProcessorT : public ParentServiceProcessorT<Protocol_> {
 protected:
  boost::shared_ptr<ChildServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
  virtual bool dispatchCallTemplated(Protocol_* iprot, Protocol_* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (ChildServiceProcessorT::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef void (ChildServiceProcessorT::*SpecializedProcessFunction)(int32_t, Protocol_*, Protocol_*, void*);
  struct ProcessFunctions {
    ProcessFunction generic;
    SpecializedProcessFunction specialized;
    ProcessFunctions(ProcessFunction g, SpecializedProcessFunction s) :
      generic(g),
      specialized(s) {}
    ProcessFunctions() : generic(NULL), specialized(NULL) {}
  };
  typedef std::map<std::string, ProcessFunctions> ProcessMap;
  ProcessMap processMap_;
  void process_setValue(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_setValue(int32_t seqid, Protocol_* iprot, Protocol_* oprot, void* callContext);
  void process_getValue(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getValue(int32_t seqid, Protocol_* iprot, Protocol_* oprot, void* callContext);
 public:
  ChildServiceProcessorT(boost::shared_ptr<ChildServiceIf> iface) :
    ParentServiceProcessorT<Protocol_>(iface),
    iface_(iface) {
    processMap_["setValue"] = ProcessFunctions(
      &ChildServiceProcessorT::process_setValue,
      &ChildServiceProcessorT::process_setValue);
    processMap_["getValue"] = ProcessFunctions(
      &ChildServiceProcessorT::process_getValue,
      &ChildServiceProcessorT::process_getValue);
  }

  virtual ~ChildServiceProcessorT() {}
};

typedef ChildServiceProcessorT< ::apache::thrift::protocol::TDummyProtocol > ChildServiceProcessor;

template <class Protocol_>
class ChildServiceProcessorFactoryT : public ::apache::thrift::TProcessorFactory {
 public:
  ChildServiceProcessorFactoryT(const ::boost::shared_ptr< ChildServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< ChildServiceIfFactory > handlerFactory_;
};

typedef ChildServiceProcessorFactoryT< ::apache::thrift::protocol::TDummyProtocol > ChildServiceProcessorFactory;

class ChildServiceMultiface : virtual public ChildServiceIf, public ParentServiceMultiface {
 public:
  ChildServiceMultiface(std::vector<boost::shared_ptr<ChildServiceIf> >& ifaces) : ifaces_(ifaces) {
    std::vector<boost::shared_ptr<ChildServiceIf> >::iterator iter;
    for (iter = ifaces.begin(); iter != ifaces.end(); ++iter) {
      ParentServiceMultiface::add(*iter);
    }
  }
  virtual ~ChildServiceMultiface() {}
 protected:
  std::vector<boost::shared_ptr<ChildServiceIf> > ifaces_;
  ChildServiceMultiface() {}
  void add(boost::shared_ptr<ChildServiceIf> iface) {
    ParentServiceMultiface::add(iface);
    ifaces_.push_back(iface);
  }
 public:
  int32_t setValue(const int32_t value) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->setValue(value);
    }
    return ifaces_[i]->setValue(value);
  }

  int32_t getValue() {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getValue();
    }
    return ifaces_[i]->getValue();
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
template <class Protocol_>
class ChildServiceConcurrentClientT : virtual public ChildServiceIf, public ParentServiceConcurrentClientT<Protocol_> {
 public:
  ChildServiceConcurrentClientT(boost::shared_ptr< Protocol_> prot) :
    ParentServiceConcurrentClientT<Protocol_>(prot, prot) {}
  ChildServiceConcurrentClientT(boost::shared_ptr< Protocol_> iprot, boost::shared_ptr< Protocol_> oprot) :    ParentServiceConcurrentClientT<Protocol_>(iprot, oprot) {}
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return this->piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return this->poprot_;
  }
  int32_t setValue(const int32_t value);
  int32_t send_setValue(const int32_t value);
  int32_t recv_setValue(const int32_t seqid);
  int32_t getValue();
  int32_t send_getValue();
  int32_t recv_getValue(const int32_t seqid);
};

typedef ChildServiceConcurrentClientT< ::apache::thrift::protocol::TProtocol> ChildServiceConcurrentClient;

template <class Protocol_>
class ChildServiceCobClientT;

template <class Protocol_>
class ChildServiceCobClIfT : virtual public ParentServiceCobClIfT<Protocol_> {
 public:
  virtual ~ChildServiceCobClIfT() {}
  virtual void setValue(tcxx::function<void(ChildServiceCobClientT<Protocol_>* client)> cob, const int32_t value) = 0;
  virtual void getValue(tcxx::function<void(ChildServiceCobClientT<Protocol_>* client)> cob) = 0;
};

typedef ChildServiceCobClIfT< ::apache::thrift::protocol::TProtocol> ChildServiceCobClIf;

class ChildServiceCobSvIf : virtual public ParentServiceCobSvIf {
 public:
  virtual ~ChildServiceCobSvIf() {}
  virtual void setValue(tcxx::function<void(int32_t const& _return)> cob, const int32_t value) = 0;
  virtual void getValue(tcxx::function<void(int32_t const& _return)> cob) = 0;
};

class ChildServiceCobSvIfFactory : virtual public ParentServiceCobSvIfFactory {
 public:
  typedef ChildServiceCobSvIf Handler;

  virtual ~ChildServiceCobSvIfFactory() {}

  virtual ChildServiceCobSvIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(ParentServiceCobSvIf* /* handler */) = 0;
};

class ChildServiceCobSvIfSingletonFactory : virtual public ChildServiceCobSvIfFactory {
 public:
  ChildServiceCobSvIfSingletonFactory(const boost::shared_ptr<ChildServiceCobSvIf>& iface) : iface_(iface) {}
  virtual ~ChildServiceCobSvIfSingletonFactory() {}

  virtual ChildServiceCobSvIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(ParentServiceCobSvIf* /* handler */) {}

 protected:
  boost::shared_ptr<ChildServiceCobSvIf> iface_;
};

class ChildServiceCobSvNull : virtual public ChildServiceCobSvIf , virtual public ParentServiceCobSvNull {
 public:
  virtual ~ChildServiceCobSvNull() {}
  void setValue(tcxx::function<void(int32_t const& _return)> cob, const int32_t /* value */) {
    int32_t _return = 0;
    return cob(_return);
  }
  void getValue(tcxx::function<void(int32_t const& _return)> cob) {
    int32_t _return = 0;
    return cob(_return);
  }
};

template <class Protocol_>
class ChildServiceCobClientT : virtual public ChildServiceCobClIfT<Protocol_>, public ParentServiceCobClientT<Protocol_> {
 public:
  ChildServiceCobClientT(boost::shared_ptr< ::apache::thrift::async::TAsyncChannel> channel, ::apache::thrift::protocol::TProtocolFactory* protocolFactory) :
    ParentServiceCobClientT<Protocol_>(channel, protocolFactory) {}
  boost::shared_ptr< ::apache::thrift::async::TAsyncChannel> getChannel() {
    return this->channel_;
  }
  virtual void completed__(bool /* success */) {}
  void setValue(tcxx::function<void(ChildServiceCobClientT<Protocol_>* client)> cob, const int32_t value);
  void send_setValue(const int32_t value);
  int32_t recv_setValue();
  void getValue(tcxx::function<void(ChildServiceCobClientT<Protocol_>* client)> cob);
  void send_getValue();
  int32_t recv_getValue();
};

typedef ChildServiceCobClientT< ::apache::thrift::protocol::TProtocol> ChildServiceCobClient;

template <class Protocol_>
class ChildServiceAsyncProcessorT : public ParentServiceAsyncProcessorT<Protocol_> {
 protected:
  boost::shared_ptr<ChildServiceCobSvIf> iface_;
  virtual void dispatchCall(tcxx::function<void(bool ok)> cob, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid);
  virtual void dispatchCallTemplated(tcxx::function<void(bool ok)> cob, Protocol_* iprot, Protocol_* oprot, const std::string& fname, int32_t seqid);
 private:
  typedef  void (ChildServiceAsyncProcessorT::*ProcessFunction)(tcxx::function<void(bool ok)>, int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*);
  typedef void (ChildServiceAsyncProcessorT::*SpecializedProcessFunction)(tcxx::function<void(bool ok)>, int32_t, Protocol_*, Protocol_*);
  struct ProcessFunctions {
    ProcessFunction generic;
    SpecializedProcessFunction specialized;
    ProcessFunctions(ProcessFunction g, SpecializedProcessFunction s) :
      generic(g),
      specialized(s) {}
    ProcessFunctions() : generic(NULL), specialized(NULL) {}
  };
  typedef std::map<std::string, ProcessFunctions> ProcessMap;
  ProcessMap processMap_;
  void process_setValue(tcxx::function<void(bool ok)> cob, int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot);
  void process_setValue(tcxx::function<void(bool ok)> cob, int32_t seqid, Protocol_* iprot, Protocol_* oprot);
  void return_setValue(tcxx::function<void(bool ok)> cob, int32_t seqid, ::apache::thrift::protocol::TProtocol* oprot, void* ctx, const int32_t& _return);
  void return_setValue(tcxx::function<void(bool ok)> cob, int32_t seqid, Protocol_* oprot, void* ctx, const int32_t& _return);
  void throw_setValue(tcxx::function<void(bool ok)> cob, int32_t seqid, ::apache::thrift::protocol::TProtocol* oprot, void* ctx, ::apache::thrift::TDelayedException* _throw);
  void throw_setValue(tcxx::function<void(bool ok)> cob, int32_t seqid, Protocol_* oprot, void* ctx, ::apache::thrift::TDelayedException* _throw);
  void process_getValue(tcxx::function<void(bool ok)> cob, int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot);
  void process_getValue(tcxx::function<void(bool ok)> cob, int32_t seqid, Protocol_* iprot, Protocol_* oprot);
  void return_getValue(tcxx::function<void(bool ok)> cob, int32_t seqid, ::apache::thrift::protocol::TProtocol* oprot, void* ctx, const int32_t& _return);
  void return_getValue(tcxx::function<void(bool ok)> cob, int32_t seqid, Protocol_* oprot, void* ctx, const int32_t& _return);
  void throw_getValue(tcxx::function<void(bool ok)> cob, int32_t seqid, ::apache::thrift::protocol::TProtocol* oprot, void* ctx, ::apache::thrift::TDelayedException* _throw);
  void throw_getValue(tcxx::function<void(bool ok)> cob, int32_t seqid, Protocol_* oprot, void* ctx, ::apache::thrift::TDelayedException* _throw);
 public:
  ChildServiceAsyncProcessorT(boost::shared_ptr<ChildServiceCobSvIf> iface) :
    ParentServiceAsyncProcessorT<Protocol_>(iface),
    iface_(iface) {
    processMap_["setValue"] = ProcessFunctions(
      &ChildServiceAsyncProcessorT::process_setValue,
      &ChildServiceAsyncProcessorT::process_setValue);
    processMap_["getValue"] = ProcessFunctions(
      &ChildServiceAsyncProcessorT::process_getValue,
      &ChildServiceAsyncProcessorT::process_getValue);
  }

  virtual ~ChildServiceAsyncProcessorT() {}
};

typedef ChildServiceAsyncProcessorT< ::apache::thrift::protocol::TDummyProtocol > ChildServiceAsyncProcessor;

template <class Protocol_>
class ChildServiceAsyncProcessorFactoryT : public ::apache::thrift::async::TAsyncProcessorFactory {
 public:
  ChildServiceAsyncProcessorFactoryT(const ::boost::shared_ptr< ChildServiceCobSvIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::async::TAsyncProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< ChildServiceCobSvIfFactory > handlerFactory_;
};

typedef ChildServiceAsyncProcessorFactoryT< ::apache::thrift::protocol::TDummyProtocol > ChildServiceAsyncProcessorFactory;

#ifdef _WIN32
  #pragma warning( pop )
#endif

}}} // namespace

#include "ChildService.tcc"
#include "proc_types.tcc"

#endif