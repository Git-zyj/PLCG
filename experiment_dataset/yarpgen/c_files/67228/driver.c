#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7528103809226632510LL;
unsigned int var_7 = 3291514740U;
long long int var_10 = -1285012532650550200LL;
unsigned long long int var_12 = 12755815302492052778ULL;
unsigned int var_13 = 2478350250U;
int zero = 0;
unsigned long long int var_18 = 12704472159788534134ULL;
unsigned char var_19 = (unsigned char)22;
unsigned short var_20 = (unsigned short)55502;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
