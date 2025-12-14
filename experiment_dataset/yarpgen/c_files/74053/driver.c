#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 17812155415251684226ULL;
_Bool var_7 = (_Bool)1;
short var_8 = (short)31033;
int var_10 = 574295519;
long long int var_16 = 8528711646148151170LL;
int zero = 0;
unsigned long long int var_20 = 6959512553558212257ULL;
unsigned long long int var_21 = 11843313000390905704ULL;
int var_22 = 2016853258;
unsigned char var_23 = (unsigned char)87;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
