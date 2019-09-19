# For local development
NAME=ng_test
WORKDIR=/ng-test
IMAGE=ngqt/qode
CONTEXT=$(pwd)

# If container already exists, exec into it, otherwise run it
if docker start $NAME &> /dev/null
then
  docker exec -it $NAME bash
else
  docker run --name $NAME -v "$CONTEXT":$WORKDIR -ti $IMAGE bash
fi
