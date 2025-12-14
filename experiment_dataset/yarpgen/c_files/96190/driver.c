#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-1416;
short var_4 = (short)-1907;
unsigned short var_5 = (unsigned short)55897;
long long int var_6 = -3792821418656355376LL;
_Bool var_7 = (_Bool)0;
int zero = 0;
short var_10 = (short)-28611;
unsigned short var_11 = (unsigned short)61628;
unsigned char var_12 = (unsigned char)31;
unsigned long long int var_13 = 13620182287155162313ULL;
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
