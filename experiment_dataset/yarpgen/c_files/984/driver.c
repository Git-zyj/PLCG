#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8284267075329064226LL;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 2178091113442119074ULL;
unsigned short var_7 = (unsigned short)25412;
long long int var_8 = -6474411286511245337LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)30808;
long long int var_17 = 8971479133276270590LL;
long long int var_18 = -8065451467250308183LL;
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
