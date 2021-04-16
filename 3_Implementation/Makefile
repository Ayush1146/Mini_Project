# Name of the project
PROJECT_NAME = resistor

BUILD = build

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif


SRC = main.c\
src/operations.c

COV_SRC = test.c

TEST_SRC = src/operations.c\
test/test.c\
unity/unity.c\

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).$(EXEC)

INC	= -Iinc\
-Iunity\

INC_H = inc

INCLUDE_LIBS = -lcunit

PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).$(EXEC)

DOCUMENTATION_OUTPUT = documentation/html

$(PROJECT_NAME):all

.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT) -lm
	
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT)


cppcheck:
	cppcheck --enable=all $(SRC) main.c

valgrind:
	valgrind ./$(PROJECT_OUTPUT)
		
doc:
	make -C ./documentation
	

test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) -lm
	./$(TEST_OUTPUT)


clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)
	
$(BUILD):
	mkdir build

























