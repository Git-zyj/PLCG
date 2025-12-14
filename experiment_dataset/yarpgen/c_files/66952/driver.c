#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5556127079735972344ULL;
unsigned char var_4 = (unsigned char)105;
unsigned char var_6 = (unsigned char)162;
unsigned short var_10 = (unsigned short)50967;
short var_11 = (short)24392;
unsigned long long int var_12 = 6141546769811933463ULL;
unsigned int var_15 = 334567715U;
int var_18 = 1683261850;
short var_19 = (short)-25315;
int zero = 0;
signed char var_20 = (signed char)114;
signed char var_21 = (signed char)-120;
void init() {
}

void checksum() {
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
