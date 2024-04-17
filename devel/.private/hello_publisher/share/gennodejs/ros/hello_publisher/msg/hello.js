// Auto-generated. Do not edit!

// (in-package hello_publisher.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class hello {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.greeting = null;
    }
    else {
      if (initObj.hasOwnProperty('greeting')) {
        this.greeting = initObj.greeting
      }
      else {
        this.greeting = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type hello
    // Serialize message field [greeting]
    bufferOffset = _serializer.string(obj.greeting, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type hello
    let len;
    let data = new hello(null);
    // Deserialize message field [greeting]
    data.greeting = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.greeting);
    return length + 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'hello_publisher/hello';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'af3498ba158bcdd555fe81847eb6e16d';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string greeting
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new hello(null);
    if (msg.greeting !== undefined) {
      resolved.greeting = msg.greeting;
    }
    else {
      resolved.greeting = ''
    }

    return resolved;
    }
};

module.exports = hello;
