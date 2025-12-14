#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17711094796016151739ULL;
unsigned short var_2 = (unsigned short)12810;
long long int var_3 = -3383839823617872019LL;
unsigned int var_13 = 2460849668U;
signed char var_15 = (signed char)-103;
long long int var_18 = -4192001692366773340LL;
int zero = 0;
long long int var_19 = 7352401499288523688LL;
int var_20 = -1288130736;
unsigned int var_21 = 899737426U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
