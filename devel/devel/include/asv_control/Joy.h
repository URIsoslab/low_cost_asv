// Generated by gencpp from file asv_control/Joy.msg
// DO NOT EDIT!


#ifndef ASV_CONTROL_MESSAGE_JOY_H
#define ASV_CONTROL_MESSAGE_JOY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace asv_control
{
template <class ContainerAllocator>
struct Joy_
{
  typedef Joy_<ContainerAllocator> Type;

  Joy_()
    : header()
    , axes()
    , buttons()  {
    }
  Joy_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , axes(_alloc)
    , buttons(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _axes_type;
  _axes_type axes;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _buttons_type;
  _buttons_type buttons;





  typedef boost::shared_ptr< ::asv_control::Joy_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::asv_control::Joy_<ContainerAllocator> const> ConstPtr;

}; // struct Joy_

typedef ::asv_control::Joy_<std::allocator<void> > Joy;

typedef boost::shared_ptr< ::asv_control::Joy > JoyPtr;
typedef boost::shared_ptr< ::asv_control::Joy const> JoyConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::asv_control::Joy_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::asv_control::Joy_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace asv_control

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'asv_control': ['/home/ubuntu/catkin_ws/src/asv_control/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::asv_control::Joy_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::asv_control::Joy_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::asv_control::Joy_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::asv_control::Joy_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::asv_control::Joy_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::asv_control::Joy_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::asv_control::Joy_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5a9ea5f83505693b71e785041e67a8bb";
  }

  static const char* value(const ::asv_control::Joy_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5a9ea5f83505693bULL;
  static const uint64_t static_value2 = 0x71e785041e67a8bbULL;
};

template<class ContainerAllocator>
struct DataType< ::asv_control::Joy_<ContainerAllocator> >
{
  static const char* value()
  {
    return "asv_control/Joy";
  }

  static const char* value(const ::asv_control::Joy_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::asv_control::Joy_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Reports the state of a joysticks axes and buttons.\n\
Header header           # timestamp in the header is the time the data is received from the joystick\n\
float32[] axes          # the axes measurements from a joystick\n\
int32[] buttons         # the buttons measurements from a joystick \n\
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

  static const char* value(const ::asv_control::Joy_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::asv_control::Joy_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.axes);
      stream.next(m.buttons);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Joy_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::asv_control::Joy_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::asv_control::Joy_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "axes[]" << std::endl;
    for (size_t i = 0; i < v.axes.size(); ++i)
    {
      s << indent << "  axes[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.axes[i]);
    }
    s << indent << "buttons[]" << std::endl;
    for (size_t i = 0; i < v.buttons.size(); ++i)
    {
      s << indent << "  buttons[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.buttons[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ASV_CONTROL_MESSAGE_JOY_H
