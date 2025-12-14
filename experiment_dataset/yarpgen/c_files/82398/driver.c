#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1734728664700972044LL;
unsigned long long int var_1 = 14574892908035739322ULL;
int var_2 = -375210283;
signed char var_3 = (signed char)80;
short var_4 = (short)-11680;
unsigned char var_5 = (unsigned char)65;
signed char var_6 = (signed char)-82;
signed char var_8 = (signed char)-106;
unsigned long long int var_12 = 13125906229212238986ULL;
signed char var_13 = (signed char)-89;
int zero = 0;
unsigned short var_14 = (unsigned short)30351;
signed char var_15 = (signed char)77;
short var_16 = (short)-8833;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
