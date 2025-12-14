#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 5068124980644612234ULL;
unsigned short var_7 = (unsigned short)26702;
int var_8 = 1820350812;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_20 = -7495315710601707714LL;
unsigned char var_21 = (unsigned char)124;
long long int var_22 = -5616126343000861227LL;
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
