#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1829683947;
long long int var_3 = -8536130183247224944LL;
unsigned long long int var_4 = 1051825171048853394ULL;
unsigned char var_5 = (unsigned char)51;
signed char var_6 = (signed char)-19;
unsigned int var_8 = 3206425406U;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-115;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
