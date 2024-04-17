#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/pranjal/ws_moveit/src/rosapi"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/pranjal/ws_moveit/install/lib/python3/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/pranjal/ws_moveit/install/lib/python3/dist-packages:/home/pranjal/ws_moveit/build/rosapi/lib/python3/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/pranjal/ws_moveit/build/rosapi" \
    "/usr/bin/python3" \
    "/home/pranjal/ws_moveit/src/rosapi/setup.py" \
    egg_info --egg-base /home/pranjal/ws_moveit/build/rosapi \
    build --build-base "/home/pranjal/ws_moveit/build/rosapi" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/pranjal/ws_moveit/install" --install-scripts="/home/pranjal/ws_moveit/install/bin"
