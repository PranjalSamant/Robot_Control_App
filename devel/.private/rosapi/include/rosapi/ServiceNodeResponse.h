// Generated by gencpp from file rosapi/ServiceNodeResponse.msg
// DO NOT EDIT!


#ifndef ROSAPI_MESSAGE_SERVICENODERESPONSE_H
#define ROSAPI_MESSAGE_SERVICENODERESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rosapi
{
template <class ContainerAllocator>
struct ServiceNodeResponse_
{
  typedef ServiceNodeResponse_<ContainerAllocator> Type;

  ServiceNodeResponse_()
    : node()  {
    }
  ServiceNodeResponse_(const ContainerAllocator& _alloc)
    : node(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _node_type;
  _node_type node;





  typedef boost::shared_ptr< ::rosapi::ServiceNodeResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosapi::ServiceNodeResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ServiceNodeResponse_

typedef ::rosapi::ServiceNodeResponse_<std::allocator<void> > ServiceNodeResponse;

typedef boost::shared_ptr< ::rosapi::ServiceNodeResponse > ServiceNodeResponsePtr;
typedef boost::shared_ptr< ::rosapi::ServiceNodeResponse const> ServiceNodeResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosapi::ServiceNodeResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosapi::ServiceNodeResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rosapi::ServiceNodeResponse_<ContainerAllocator1> & lhs, const ::rosapi::ServiceNodeResponse_<ContainerAllocator2> & rhs)
{
  return lhs.node == rhs.node;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rosapi::ServiceNodeResponse_<ContainerAllocator1> & lhs, const ::rosapi::ServiceNodeResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rosapi

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rosapi::ServiceNodeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosapi::ServiceNodeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosapi::ServiceNodeResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosapi::ServiceNodeResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosapi::ServiceNodeResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosapi::ServiceNodeResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosapi::ServiceNodeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a94c40e70a4b82863e6e52ec16732447";
  }

  static const char* value(const ::rosapi::ServiceNodeResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa94c40e70a4b8286ULL;
  static const uint64_t static_value2 = 0x3e6e52ec16732447ULL;
};

template<class ContainerAllocator>
struct DataType< ::rosapi::ServiceNodeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosapi/ServiceNodeResponse";
  }

  static const char* value(const ::rosapi::ServiceNodeResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosapi::ServiceNodeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string node\n"
;
  }

  static const char* value(const ::rosapi::ServiceNodeResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosapi::ServiceNodeResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.node);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ServiceNodeResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosapi::ServiceNodeResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosapi::ServiceNodeResponse_<ContainerAllocator>& v)
  {
    s << indent << "node: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.node);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSAPI_MESSAGE_SERVICENODERESPONSE_H
