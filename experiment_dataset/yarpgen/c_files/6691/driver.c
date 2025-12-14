#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-99;
unsigned short var_5 = (unsigned short)31043;
signed char var_6 = (signed char)-34;
unsigned short var_7 = (unsigned short)10661;
short var_17 = (short)21743;
unsigned short var_18 = (unsigned short)41139;
int zero = 0;
int var_19 = -460063911;
unsigned int var_20 = 1136740804U;
unsigned short var_21 = (unsigned short)22301;
signed char arr_1 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (signed char)-61;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
