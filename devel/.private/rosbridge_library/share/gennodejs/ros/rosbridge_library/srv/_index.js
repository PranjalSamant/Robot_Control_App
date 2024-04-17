
"use strict";

let TestMultipleRequestFields = require('./TestMultipleRequestFields.js')
let TestMultipleResponseFields = require('./TestMultipleResponseFields.js')
let TestArrayRequest = require('./TestArrayRequest.js')
let SendBytes = require('./SendBytes.js')
let TestResponseOnly = require('./TestResponseOnly.js')
let TestNestedService = require('./TestNestedService.js')
let TestRequestAndResponse = require('./TestRequestAndResponse.js')
let AddTwoInts = require('./AddTwoInts.js')
let TestRequestOnly = require('./TestRequestOnly.js')
let TestEmpty = require('./TestEmpty.js')

module.exports = {
  TestMultipleRequestFields: TestMultipleRequestFields,
  TestMultipleResponseFields: TestMultipleResponseFields,
  TestArrayRequest: TestArrayRequest,
  SendBytes: SendBytes,
  TestResponseOnly: TestResponseOnly,
  TestNestedService: TestNestedService,
  TestRequestAndResponse: TestRequestAndResponse,
  AddTwoInts: AddTwoInts,
  TestRequestOnly: TestRequestOnly,
  TestEmpty: TestEmpty,
};
