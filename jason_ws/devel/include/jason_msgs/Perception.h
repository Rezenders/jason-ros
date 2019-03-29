// Generated by gencpp from file jason_msgs/Perception.msg
// DO NOT EDIT!


#ifndef JASON_MSGS_MESSAGE_PERCEPTION_H
#define JASON_MSGS_MESSAGE_PERCEPTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace jason_msgs
{
template <class ContainerAllocator>
struct Perception_
{
  typedef Perception_<ContainerAllocator> Type;

  Perception_()
    : header()
    , perception_name()
    , parameters()  {
    }
  Perception_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , perception_name(_alloc)
    , parameters(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _perception_name_type;
  _perception_name_type perception_name;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _parameters_type;
  _parameters_type parameters;





  typedef boost::shared_ptr< ::jason_msgs::Perception_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jason_msgs::Perception_<ContainerAllocator> const> ConstPtr;

}; // struct Perception_

typedef ::jason_msgs::Perception_<std::allocator<void> > Perception;

typedef boost::shared_ptr< ::jason_msgs::Perception > PerceptionPtr;
typedef boost::shared_ptr< ::jason_msgs::Perception const> PerceptionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jason_msgs::Perception_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jason_msgs::Perception_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace jason_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'jason_msgs': ['/root/jason-ros/jason_ws/src/jason_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::jason_msgs::Perception_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jason_msgs::Perception_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jason_msgs::Perception_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jason_msgs::Perception_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jason_msgs::Perception_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jason_msgs::Perception_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jason_msgs::Perception_<ContainerAllocator> >
{
  static const char* value()
  {
    return "61b31acc0308141c8fc2599a7f94bcb0";
  }

  static const char* value(const ::jason_msgs::Perception_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x61b31acc0308141cULL;
  static const uint64_t static_value2 = 0x8fc2599a7f94bcb0ULL;
};

template<class ContainerAllocator>
struct DataType< ::jason_msgs::Perception_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jason_msgs/Perception";
  }

  static const char* value(const ::jason_msgs::Perception_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jason_msgs::Perception_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
string perception_name\n\
string[] parameters\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::jason_msgs::Perception_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jason_msgs::Perception_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.perception_name);
      stream.next(m.parameters);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Perception_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jason_msgs::Perception_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::jason_msgs::Perception_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "perception_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.perception_name);
    s << indent << "parameters[]" << std::endl;
    for (size_t i = 0; i < v.parameters.size(); ++i)
    {
      s << indent << "  parameters[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.parameters[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // JASON_MSGS_MESSAGE_PERCEPTION_H
