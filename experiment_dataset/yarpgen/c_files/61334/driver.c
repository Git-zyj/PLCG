#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-22;
int var_6 = -988696381;
unsigned char var_7 = (unsigned char)163;
short var_11 = (short)20248;
unsigned long long int var_13 = 11028824345036296504ULL;
int zero = 0;
long long int var_15 = 2784967777613776154LL;
unsigned short var_16 = (unsigned short)14877;
unsigned short var_17 = (unsigned short)37899;
unsigned long long int var_18 = 1653335072290570244ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
