#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)12;
long long int var_3 = 5747824071325468490LL;
unsigned char var_4 = (unsigned char)59;
unsigned long long int var_7 = 14288714407339362279ULL;
unsigned long long int var_8 = 8645986033467783212ULL;
unsigned long long int var_14 = 4049238668133123553ULL;
long long int var_16 = -4011971819935928727LL;
int zero = 0;
unsigned long long int var_17 = 8273307710389194576ULL;
unsigned long long int var_18 = 8327861140464757701ULL;
long long int var_19 = 3307505754120528213LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
