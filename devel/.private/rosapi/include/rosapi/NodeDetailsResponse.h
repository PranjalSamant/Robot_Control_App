// Generated by gencpp from file rosapi/NodeDetailsResponse.msg
// DO NOT EDIT!


#ifndef ROSAPI_MESSAGE_NODEDETAILSRESPONSE_H
#define ROSAPI_MESSAGE_NODEDETAILSRESPONSE_H


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
struct NodeDetailsResponse_
{
  typedef NodeDetailsResponse_<ContainerAllocator> Type;

  NodeDetailsResponse_()
    : subscribing()
    , publishing()
    , services()  {
    }
  NodeDetailsResponse_(const ContainerAllocator& _alloc)
    : subscribing(_alloc)
    , publishing(_alloc)
    , services(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _subscribing_type;
  _subscribing_type subscribing;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _publishing_type;
  _publishing_type publishing;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _services_type;
  _services_type services;





  typedef boost::shared_ptr< ::rosapi::NodeDetailsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosapi::NodeDetailsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct NodeDetailsResponse_

typedef ::rosapi::NodeDetailsResponse_<std::allocator<void> > NodeDetailsResponse;

typedef boost::shared_ptr< ::rosapi::NodeDetailsResponse > NodeDetailsResponsePtr;
typedef boost::shared_ptr< ::rosapi::NodeDetailsResponse const> NodeDetailsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosapi::NodeDetailsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosapi::NodeDetailsResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rosapi::NodeDetailsResponse_<ContainerAllocator1> & lhs, const ::rosapi::NodeDetailsResponse_<ContainerAllocator2> & rhs)
{
  return lhs.subscribing == rhs.subscribing &&
    lhs.publishing == rhs.publishing &&
    lhs.services == rhs.services;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rosapi::NodeDetailsResponse_<ContainerAllocator1> & lhs, const ::rosapi::NodeDetailsResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rosapi

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rosapi::NodeDetailsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosapi::NodeDetailsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosapi::NodeDetailsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosapi::NodeDetailsResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosapi::NodeDetailsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosapi::NodeDetailsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosapi::NodeDetailsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3da1cb16c6ec5885ad291735b6244a48";
  }

  static const char* value(const ::rosapi::NodeDetailsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3da1cb16c6ec5885ULL;
  static const uint64_t static_value2 = 0xad291735b6244a48ULL;
};

template<class ContainerAllocator>
struct DataType< ::rosapi::NodeDetailsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosapi/NodeDetailsResponse";
  }

  static const char* value(const ::rosapi::NodeDetailsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosapi::NodeDetailsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] subscribing\n"
"string[] publishing\n"
"string[] services\n"
;
  }

  static const char* value(const ::rosapi::NodeDetailsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosapi::NodeDetailsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.subscribing);
      stream.next(m.publishing);
      stream.next(m.services);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NodeDetailsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosapi::NodeDetailsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosapi::NodeDetailsResponse_<ContainerAllocator>& v)
  {
    s << indent << "subscribing[]" << std::endl;
    for (size_t i = 0; i < v.subscribing.size(); ++i)
    {
      s << indent << "  subscribing[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.subscribing[i]);
    }
    s << indent << "publishing[]" << std::endl;
    for (size_t i = 0; i < v.publishing.size(); ++i)
    {
      s << indent << "  publishing[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.publishing[i]);
    }
    s << indent << "services[]" << std::endl;
    for (size_t i = 0; i < v.services.size(); ++i)
    {
      s << indent << "  services[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.services[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSAPI_MESSAGE_NODEDETAILSRESPONSE_H
