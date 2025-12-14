#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1067911011;
unsigned int var_6 = 1489486609U;
unsigned short var_8 = (unsigned short)35510;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)50814;
int zero = 0;
unsigned short var_12 = (unsigned short)57982;
unsigned long long int var_13 = 11784594587067324556ULL;
long long int var_14 = -2998860999860584447LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
