#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2587852487U;
signed char var_3 = (signed char)-3;
signed char var_4 = (signed char)101;
unsigned short var_7 = (unsigned short)40940;
unsigned short var_8 = (unsigned short)2164;
short var_9 = (short)29926;
unsigned short var_10 = (unsigned short)54770;
unsigned long long int var_13 = 5528261919367541097ULL;
int zero = 0;
short var_14 = (short)-4080;
unsigned long long int var_15 = 4549799751966679347ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
