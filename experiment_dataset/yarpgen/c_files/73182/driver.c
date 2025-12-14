#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-11337;
short var_4 = (short)19182;
int var_5 = 390687780;
int var_7 = 904797547;
int var_8 = 437159699;
int zero = 0;
int var_11 = 480177974;
short var_12 = (short)26273;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
