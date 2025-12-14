#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1082652166987109362LL;
signed char var_3 = (signed char)-64;
short var_6 = (short)-32306;
signed char var_7 = (signed char)-126;
short var_8 = (short)-11136;
signed char var_9 = (signed char)-74;
long long int var_10 = -4958014315661365883LL;
signed char var_12 = (signed char)-93;
long long int var_13 = -4807954698904584758LL;
unsigned int var_14 = 620341442U;
unsigned long long int var_19 = 16218459672988037735ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)211;
unsigned int var_21 = 1987666833U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
