#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)54811;
signed char var_4 = (signed char)-66;
short var_5 = (short)-5465;
short var_7 = (short)-19049;
unsigned int var_8 = 1359201290U;
unsigned int var_11 = 4046825856U;
int zero = 0;
long long int var_18 = 2972175703390649693LL;
unsigned long long int var_19 = 13308286351490897886ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
