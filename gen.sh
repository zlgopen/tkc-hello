NAME=$1
AUTHOR=$2

if [ "$AUTHOR" = "" ]
then
  echo "=================================="
  echo "Usage: $0 name(must be a valid c variable name) author"
  echo "----------------------------------"
  echo "Ex: $0 count_words 'Li XianJing <lixianjing@zlg.cn>'"
  echo "=================================="
  exit 1
fi

DATE=`date +%Y-%m-%d`
UPPER_NAME=`echo $NAME | tr a-z A-Z`

if [ -e $NAME ]
then
  echo $NAME exist, please remove it first.
  exit 1
fi

echo $NAME $UPPER_NAME

cp -rvf template $NAME

cd $NAME
for f in README.md SConstruct src/hello.h src/hello.c demos/demo.c demos/SConscript \
  tests/SConscript tests/hello_test.cc src/SConscript
do
  sed -i -e "s/hello/$NAME/" $f
  sed -i -e "s/HELLO/$UPPER_NAME/" $f
  sed -i -e "s/2020-12-07/$DATE/" $f
  sed -i -e "s/AUTHOR/$AUTHOR/" $f
  rm -f $f-e
done

mv src/hello.h src/$NAME.h
mv src/hello.c src/$NAME.c
mv tests/hello_test.cc tests/"$NAME"_test.cc
