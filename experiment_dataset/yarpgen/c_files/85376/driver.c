#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)25264;
unsigned long long int var_3 = 11221917155610855294ULL;
unsigned long long int var_4 = 7903555470158572991ULL;
short var_6 = (short)-15322;
long long int var_7 = -5681502690311904070LL;
signed char var_10 = (signed char)41;
long long int var_12 = -6935599214878180511LL;
long long int var_13 = 2514487947026926154LL;
unsigned long long int var_15 = 3149164026805884997ULL;
int zero = 0;
long long int var_16 = 4687781257350536403LL;
signed char var_17 = (signed char)50;
long long int var_18 = -8009889303078319039LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
