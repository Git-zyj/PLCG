#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)67;
unsigned short var_7 = (unsigned short)42513;
int var_9 = 242845389;
int var_16 = 1434669151;
int var_18 = -990418329;
int zero = 0;
unsigned long long int var_19 = 18346353135752096885ULL;
unsigned short var_20 = (unsigned short)34076;
void init() {
}

void checksum() {
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
