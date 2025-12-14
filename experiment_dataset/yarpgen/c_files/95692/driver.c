#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60579;
unsigned int var_3 = 4223394545U;
unsigned char var_4 = (unsigned char)12;
signed char var_6 = (signed char)-106;
short var_7 = (short)32276;
unsigned int var_8 = 2492816715U;
int var_10 = -1637416502;
int zero = 0;
unsigned int var_11 = 3013839439U;
unsigned short var_12 = (unsigned short)5931;
unsigned short var_13 = (unsigned short)8337;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
