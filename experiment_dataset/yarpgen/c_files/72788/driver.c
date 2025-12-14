#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)203;
unsigned long long int var_5 = 12157272547647747932ULL;
_Bool var_8 = (_Bool)1;
int zero = 0;
short var_14 = (short)-20197;
unsigned short var_15 = (unsigned short)53612;
long long int var_16 = -2500081601046419147LL;
unsigned short var_17 = (unsigned short)61436;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
