#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16971438650124412155ULL;
unsigned short var_5 = (unsigned short)33868;
signed char var_7 = (signed char)120;
int zero = 0;
unsigned long long int var_10 = 15758037889809372804ULL;
unsigned long long int var_11 = 1342696050650464953ULL;
_Bool var_12 = (_Bool)1;
int var_13 = 1223617166;
signed char var_14 = (signed char)41;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
