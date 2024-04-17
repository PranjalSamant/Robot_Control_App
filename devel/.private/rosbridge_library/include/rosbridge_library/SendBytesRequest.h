// Generated by gencpp from file rosbridge_library/SendBytesRequest.msg
// DO NOT EDIT!


#ifndef ROSBRIDGE_LIBRARY_MESSAGE_SENDBYTESREQUEST_H
#define ROSBRIDGE_LIBRARY_MESSAGE_SENDBYTESREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rosbridge_library
{
template <class ContainerAllocator>
struct SendBytesRequest_
{
  typedef SendBytesRequest_<ContainerAllocator> Type;

  SendBytesRequest_()
    : count(0)  {
    }
  SendBytesRequest_(const ContainerAllocator& _alloc)
    : count(0)  {
  (void)_alloc;
    }



   typedef int64_t _count_type;
  _count_type count;





  typedef boost::shared_ptr< ::rosbridge_library::SendBytesRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosbridge_library::SendBytesRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SendBytesRequest_

typedef ::rosbridge_library::SendBytesRequest_<std::allocator<void> > SendBytesRequest;

typedef boost::shared_ptr< ::rosbridge_library::SendBytesRequest > SendBytesRequestPtr;
typedef boost::shared_ptr< ::rosbridge_library::SendBytesRequest const> SendBytesRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosbridge_library::SendBytesRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosbridge_library::SendBytesRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rosbridge_library::SendBytesRequest_<ContainerAllocator1> & lhs, const ::rosbridge_library::SendBytesRequest_<ContainerAllocator2> & rhs)
{
  return lhs.count == rhs.count;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rosbridge_library::SendBytesRequest_<ContainerAllocator1> & lhs, const ::rosbridge_library::SendBytesRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rosbridge_library

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rosbridge_library::SendBytesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosbridge_library::SendBytesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosbridge_library::SendBytesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosbridge_library::SendBytesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosbridge_library::SendBytesRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosbridge_library::SendBytesRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosbridge_library::SendBytesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8dbac33d2eb67bfeeedd516d65fec846";
  }

  static const char* value(const ::rosbridge_library::SendBytesRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8dbac33d2eb67bfeULL;
  static const uint64_t static_value2 = 0xeedd516d65fec846ULL;
};

template<class ContainerAllocator>
struct DataType< ::rosbridge_library::SendBytesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosbridge_library/SendBytesRequest";
  }

  static const char* value(const ::rosbridge_library::SendBytesRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosbridge_library::SendBytesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 count\n"
;
  }

  static const char* value(const ::rosbridge_library::SendBytesRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosbridge_library::SendBytesRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.count);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SendBytesRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosbridge_library::SendBytesRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosbridge_library::SendBytesRequest_<ContainerAllocator>& v)
  {
    s << indent << "count: ";
    Printer<int64_t>::stream(s, indent + "  ", v.count);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSBRIDGE_LIBRARY_MESSAGE_SENDBYTESREQUEST_H
