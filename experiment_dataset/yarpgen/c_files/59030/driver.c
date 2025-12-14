#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 4272404669320417675LL;
unsigned short var_8 = (unsigned short)16292;
unsigned short var_10 = (unsigned short)8844;
int zero = 0;
int var_20 = 1156349194;
unsigned long long int var_21 = 15876191084479009325ULL;
unsigned short var_22 = (unsigned short)26024;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
