// Generated by gencpp from file rosapi/PublishersRequest.msg
// DO NOT EDIT!


#ifndef ROSAPI_MESSAGE_PUBLISHERSREQUEST_H
#define ROSAPI_MESSAGE_PUBLISHERSREQUEST_H


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
struct PublishersRequest_
{
  typedef PublishersRequest_<ContainerAllocator> Type;

  PublishersRequest_()
    : topic()  {
    }
  PublishersRequest_(const ContainerAllocator& _alloc)
    : topic(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _topic_type;
  _topic_type topic;





  typedef boost::shared_ptr< ::rosapi::PublishersRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosapi::PublishersRequest_<ContainerAllocator> const> ConstPtr;

}; // struct PublishersRequest_

typedef ::rosapi::PublishersRequest_<std::allocator<void> > PublishersRequest;

typedef boost::shared_ptr< ::rosapi::PublishersRequest > PublishersRequestPtr;
typedef boost::shared_ptr< ::rosapi::PublishersRequest const> PublishersRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosapi::PublishersRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosapi::PublishersRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rosapi::PublishersRequest_<ContainerAllocator1> & lhs, const ::rosapi::PublishersRequest_<ContainerAllocator2> & rhs)
{
  return lhs.topic == rhs.topic;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rosapi::PublishersRequest_<ContainerAllocator1> & lhs, const ::rosapi::PublishersRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rosapi

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rosapi::PublishersRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosapi::PublishersRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosapi::PublishersRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosapi::PublishersRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosapi::PublishersRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosapi::PublishersRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosapi::PublishersRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d8f94bae31b356b24d0427f80426d0c3";
  }

  static const char* value(const ::rosapi::PublishersRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd8f94bae31b356b2ULL;
  static const uint64_t static_value2 = 0x4d0427f80426d0c3ULL;
};

template<class ContainerAllocator>
struct DataType< ::rosapi::PublishersRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosapi/PublishersRequest";
  }

  static const char* value(const ::rosapi::PublishersRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosapi::PublishersRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string topic\n"
;
  }

  static const char* value(const ::rosapi::PublishersRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosapi::PublishersRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.topic);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PublishersRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosapi::PublishersRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosapi::PublishersRequest_<ContainerAllocator>& v)
  {
    s << indent << "topic: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.topic);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSAPI_MESSAGE_PUBLISHERSREQUEST_H