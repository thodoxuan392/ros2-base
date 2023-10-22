BUILD_DIR = ${PWD}/build
INSTALL_DIR = ${PWD}/install

all: build-all

build-all: 
	@colcon build  --build-base ${BUILD_DIR} --install-base ${INSTALL_DIR}

test-all: 
	@colcon test   --build-base ${BUILD_DIR} --install-base ${INSTALL_DIR}

clean:
	@rm -r ${INSTALL_DIR} ${BUILD_DIR}

