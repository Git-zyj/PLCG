#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2567129191940037572ULL;
short var_1 = (short)-27710;
int var_2 = -1599608765;
signed char var_3 = (signed char)106;
short var_4 = (short)29162;
unsigned short var_6 = (unsigned short)37915;
int var_8 = -1301834151;
short var_9 = (short)10696;
signed char var_10 = (signed char)7;
unsigned int var_11 = 187680799U;
int var_12 = -310381495;
int var_13 = -1237208878;
short var_14 = (short)6119;
int zero = 0;
short var_15 = (short)8606;
signed char var_16 = (signed char)-34;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
