#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)7268;
unsigned short var_3 = (unsigned short)33681;
unsigned long long int var_4 = 12168917493870210103ULL;
unsigned long long int var_5 = 1322343694042063924ULL;
unsigned short var_6 = (unsigned short)34130;
unsigned short var_9 = (unsigned short)40664;
_Bool var_11 = (_Bool)0;
unsigned long long int var_13 = 9802579120732672594ULL;
short var_16 = (short)-13152;
int zero = 0;
unsigned short var_17 = (unsigned short)20189;
_Bool var_18 = (_Bool)0;
short var_19 = (short)24511;
short var_20 = (short)-6;
short var_21 = (short)8118;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
