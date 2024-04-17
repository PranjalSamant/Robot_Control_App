// Generated by gencpp from file rosapi/SetParam.msg
// DO NOT EDIT!


#ifndef ROSAPI_MESSAGE_SETPARAM_H
#define ROSAPI_MESSAGE_SETPARAM_H

#include <ros/service_traits.h>


#include <rosapi/SetParamRequest.h>
#include <rosapi/SetParamResponse.h>


namespace rosapi
{

struct SetParam
{

typedef SetParamRequest Request;
typedef SetParamResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetParam
} // namespace rosapi


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::rosapi::SetParam > {
  static const char* value()
  {
    return "bc6ccc4a57f61779c8eaae61e9f422e0";
  }

  static const char* value(const ::rosapi::SetParam&) { return value(); }
};

template<>
struct DataType< ::rosapi::SetParam > {
  static const char* value()
  {
    return "rosapi/SetParam";
  }

  static const char* value(const ::rosapi::SetParam&) { return value(); }
};


// service_traits::MD5Sum< ::rosapi::SetParamRequest> should match
// service_traits::MD5Sum< ::rosapi::SetParam >
template<>
struct MD5Sum< ::rosapi::SetParamRequest>
{
  static const char* value()
  {
    return MD5Sum< ::rosapi::SetParam >::value();
  }
  static const char* value(const ::rosapi::SetParamRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::rosapi::SetParamRequest> should match
// service_traits::DataType< ::rosapi::SetParam >
template<>
struct DataType< ::rosapi::SetParamRequest>
{
  static const char* value()
  {
    return DataType< ::rosapi::SetParam >::value();
  }
  static const char* value(const ::rosapi::SetParamRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::rosapi::SetParamResponse> should match
// service_traits::MD5Sum< ::rosapi::SetParam >
template<>
struct MD5Sum< ::rosapi::SetParamResponse>
{
  static const char* value()
  {
    return MD5Sum< ::rosapi::SetParam >::value();
  }
  static const char* value(const ::rosapi::SetParamResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::rosapi::SetParamResponse> should match
// service_traits::DataType< ::rosapi::SetParam >
template<>
struct DataType< ::rosapi::SetParamResponse>
{
  static const char* value()
  {
    return DataType< ::rosapi::SetParam >::value();
  }
  static const char* value(const ::rosapi::SetParamResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROSAPI_MESSAGE_SETPARAM_H
