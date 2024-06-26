// Auto-generated. Do not edit!

// (in-package rosapi.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

let TypeDef = require('../msg/TypeDef.js');

//-----------------------------------------------------------

class ServiceRequestDetailsRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.type = null;
    }
    else {
      if (initObj.hasOwnProperty('type')) {
        this.type = initObj.type
      }
      else {
        this.type = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ServiceRequestDetailsRequest
    // Serialize message field [type]
    bufferOffset = _serializer.string(obj.type, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ServiceRequestDetailsRequest
    let len;
    let data = new ServiceRequestDetailsRequest(null);
    // Deserialize message field [type]
    data.type = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.type);
    return length + 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'rosapi/ServiceRequestDetailsRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'dc67331de85cf97091b7d45e5c64ab75';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string type
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ServiceRequestDetailsRequest(null);
    if (msg.type !== undefined) {
      resolved.type = msg.type;
    }
    else {
      resolved.type = ''
    }

    return resolved;
    }
};

class ServiceRequestDetailsResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.typedefs = null;
    }
    else {
      if (initObj.hasOwnProperty('typedefs')) {
        this.typedefs = initObj.typedefs
      }
      else {
        this.typedefs = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ServiceRequestDetailsResponse
    // Serialize message field [typedefs]
    // Serialize the length for message field [typedefs]
    bufferOffset = _serializer.uint32(obj.typedefs.length, buffer, bufferOffset);
    obj.typedefs.forEach((val) => {
      bufferOffset = TypeDef.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ServiceRequestDetailsResponse
    let len;
    let data = new ServiceRequestDetailsResponse(null);
    // Deserialize message field [typedefs]
    // Deserialize array length for message field [typedefs]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.typedefs = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.typedefs[i] = TypeDef.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    object.typedefs.forEach((val) => {
      length += TypeDef.getMessageSize(val);
    });
    return length + 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'rosapi/ServiceRequestDetailsResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'a6b8995777f214f2ed97a1e4890feb10';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    TypeDef[] typedefs
    
    ================================================================================
    MSG: rosapi/TypeDef
    string type
    string[] fieldnames
    string[] fieldtypes
    int32[] fieldarraylen
    string[] examples
    string[] constnames
    string[] constvalues
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ServiceRequestDetailsResponse(null);
    if (msg.typedefs !== undefined) {
      resolved.typedefs = new Array(msg.typedefs.length);
      for (let i = 0; i < resolved.typedefs.length; ++i) {
        resolved.typedefs[i] = TypeDef.Resolve(msg.typedefs[i]);
      }
    }
    else {
      resolved.typedefs = []
    }

    return resolved;
    }
};

module.exports = {
  Request: ServiceRequestDetailsRequest,
  Response: ServiceRequestDetailsResponse,
  md5sum() { return 'f9c88144f6f6bd888dd99d4e0411905d'; },
  datatype() { return 'rosapi/ServiceRequestDetails'; }
};
