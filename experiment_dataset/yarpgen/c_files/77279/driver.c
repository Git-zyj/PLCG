#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -5100648420744853284LL;
int var_8 = -591509706;
unsigned long long int var_14 = 4526798089216686067ULL;
unsigned long long int var_15 = 16215212712646321462ULL;
int zero = 0;
signed char var_17 = (signed char)-37;
int var_18 = -1013846811;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 17013029084367181355ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
