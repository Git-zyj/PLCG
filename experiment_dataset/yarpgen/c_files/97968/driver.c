#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7938507391611921988LL;
unsigned int var_3 = 2454051593U;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)462;
long long int var_7 = 2976537664164704554LL;
unsigned char var_9 = (unsigned char)17;
unsigned char var_10 = (unsigned char)248;
int var_12 = -1426649109;
int zero = 0;
long long int var_13 = -1950353057891735039LL;
unsigned short var_14 = (unsigned short)13924;
unsigned short var_15 = (unsigned short)19262;
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
