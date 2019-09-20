# For local development
NAME=ng_test
WORKDIR=/ng-test
FILE=Dockerfile
CONTEXT=$(pwd)

# If container already exists, exec into it, otherwise run it
if docker start $NAME &> /dev/null
then
  docker exec -w $WORKDIR -it $NAME bash
else
	docker build -f $FILE -t $NAME .
  docker run --name $NAME -v "$CONTEXT":$WORKDIR -w $WORKDIR -it $NAME bash
fi
