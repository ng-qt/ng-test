#!/bin/bash
NAME=${1:-ng-test}
WORKDIR=/$NAME
CMD=${2:-bash}
FILE=${3:-dev.Dockerfile}
CONTEXT=${4:-$(pwd)}

# If container already exists, exec into it, otherwise run it
if docker start $NAME &> /dev/null
then
  docker exec -w $WORKDIR -it $NAME $CMD
else
	docker build -f $FILE -t $NAME .
  docker run --name $NAME -v "$CONTEXT":$WORKDIR -w $WORKDIR -it $NAME $CMD
fi
