#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5324645208445395239LL;
unsigned long long int var_4 = 6879944748763219360ULL;
long long int var_5 = -2284341033132213025LL;
unsigned long long int var_7 = 12773881915952661582ULL;
unsigned int var_14 = 3867064209U;
unsigned short var_17 = (unsigned short)44249;
int zero = 0;
unsigned int var_19 = 1801617595U;
long long int var_20 = 433097582676438005LL;
long long int var_21 = -6425542129808561753LL;
unsigned long long int var_22 = 2640783864945714817ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
