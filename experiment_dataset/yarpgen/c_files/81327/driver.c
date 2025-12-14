#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3564332003322017434ULL;
unsigned char var_1 = (unsigned char)66;
unsigned long long int var_2 = 7776255557255273934ULL;
_Bool var_3 = (_Bool)0;
unsigned short var_6 = (unsigned short)47982;
_Bool var_7 = (_Bool)1;
int zero = 0;
long long int var_10 = -4839250234559967059LL;
long long int var_11 = 6104836379881358996LL;
unsigned char var_12 = (unsigned char)199;
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
