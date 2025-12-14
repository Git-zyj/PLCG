#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14545954448025463726ULL;
long long int var_3 = 3021053620344875006LL;
unsigned long long int var_9 = 10683748870643775712ULL;
long long int var_14 = -5670049181764283897LL;
int zero = 0;
signed char var_16 = (signed char)-66;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)232;
unsigned long long int var_19 = 5617088192929730565ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
