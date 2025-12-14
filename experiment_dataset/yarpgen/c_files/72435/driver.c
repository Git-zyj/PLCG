#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -566249371;
int var_1 = 446148550;
unsigned short var_2 = (unsigned short)23805;
unsigned short var_3 = (unsigned short)9127;
unsigned int var_5 = 1506992119U;
signed char var_7 = (signed char)7;
unsigned char var_8 = (unsigned char)143;
unsigned short var_9 = (unsigned short)714;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 3203004334U;
unsigned short var_12 = (unsigned short)825;
unsigned long long int var_13 = 10153769036950572212ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
