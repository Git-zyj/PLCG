#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)17963;
unsigned short var_2 = (unsigned short)64629;
short var_4 = (short)-27795;
signed char var_5 = (signed char)54;
signed char var_7 = (signed char)-72;
signed char var_12 = (signed char)-67;
signed char var_16 = (signed char)66;
unsigned short var_17 = (unsigned short)36870;
int zero = 0;
signed char var_18 = (signed char)-43;
short var_19 = (short)-11229;
signed char var_20 = (signed char)105;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
