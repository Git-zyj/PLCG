#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1515319207U;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)11485;
int var_5 = 1510126079;
unsigned int var_7 = 2015438471U;
unsigned short var_8 = (unsigned short)15530;
int zero = 0;
unsigned long long int var_11 = 2586693567940673207ULL;
unsigned long long int var_12 = 6225809791906223891ULL;
long long int var_13 = 6713790791129170066LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
