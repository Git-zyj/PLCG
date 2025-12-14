#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16085;
unsigned char var_2 = (unsigned char)27;
unsigned short var_4 = (unsigned short)65158;
long long int var_7 = 7263777379705963222LL;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_13 = -1696811423977846406LL;
unsigned char var_14 = (unsigned char)107;
int var_15 = -202300858;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
