#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-2477;
unsigned short var_5 = (unsigned short)37455;
signed char var_9 = (signed char)-64;
short var_13 = (short)12034;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 1204538297471182810ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)73;
long long int var_17 = 6690909616199073976LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
