#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 10679479141948552018ULL;
unsigned long long int var_7 = 1293896379283826879ULL;
_Bool var_8 = (_Bool)1;
long long int var_11 = -8316113918550306790LL;
unsigned char var_13 = (unsigned char)40;
unsigned char var_17 = (unsigned char)200;
int zero = 0;
unsigned short var_18 = (unsigned short)9042;
unsigned char var_19 = (unsigned char)224;
unsigned short var_20 = (unsigned short)9704;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
