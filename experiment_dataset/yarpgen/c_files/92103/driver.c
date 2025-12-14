#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16619575048371599765ULL;
_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)61922;
int var_6 = -1576108708;
unsigned long long int var_7 = 17152357873290059847ULL;
unsigned short var_9 = (unsigned short)56530;
int zero = 0;
unsigned int var_10 = 2299221179U;
unsigned short var_11 = (unsigned short)61265;
unsigned long long int var_12 = 11984507138606818548ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
