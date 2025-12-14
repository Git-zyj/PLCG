#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17999;
signed char var_2 = (signed char)97;
unsigned short var_4 = (unsigned short)7293;
int var_5 = 444788974;
int var_6 = 922663183;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_13 = 14480022309067701169ULL;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)25789;
unsigned char var_16 = (unsigned char)212;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
