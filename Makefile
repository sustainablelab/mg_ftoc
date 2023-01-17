CXXFLAGS = -std=c++11 -Wall -Wpedantic

SRC = main
EXE = mg_ftoc
default-target: $(EXE)

$(EXE): $(SRC).cpp
	$(CXX) $(CXXFLAGS) -o $@ $^
