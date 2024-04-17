
(cl:in-package :asdf)

(defsystem "hello_publisher-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "hello" :depends-on ("_package_hello"))
    (:file "_package_hello" :depends-on ("_package"))
  ))