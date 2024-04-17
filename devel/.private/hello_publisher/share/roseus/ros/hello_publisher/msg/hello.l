;; Auto-generated. Do not edit!


(when (boundp 'hello_publisher::hello)
  (if (not (find-package "HELLO_PUBLISHER"))
    (make-package "HELLO_PUBLISHER"))
  (shadow 'hello (find-package "HELLO_PUBLISHER")))
(unless (find-package "HELLO_PUBLISHER::HELLO")
  (make-package "HELLO_PUBLISHER::HELLO"))

(in-package "ROS")
;;//! \htmlinclude hello.msg.html


(defclass hello_publisher::hello
  :super ros::object
  :slots (_greeting ))

(defmethod hello_publisher::hello
  (:init
   (&key
    ((:greeting __greeting) "")
    )
   (send-super :init)
   (setq _greeting (string __greeting))
   self)
  (:greeting
   (&optional __greeting)
   (if __greeting (setq _greeting __greeting)) _greeting)
  (:serialization-length
   ()
   (+
    ;; string _greeting
    4 (length _greeting)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _greeting
       (write-long (length _greeting) s) (princ _greeting s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _greeting
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _greeting (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(setf (get hello_publisher::hello :md5sum-) "af3498ba158bcdd555fe81847eb6e16d")
(setf (get hello_publisher::hello :datatype-) "hello_publisher/hello")
(setf (get hello_publisher::hello :definition-)
      "string greeting

")



(provide :hello_publisher/hello "af3498ba158bcdd555fe81847eb6e16d")


