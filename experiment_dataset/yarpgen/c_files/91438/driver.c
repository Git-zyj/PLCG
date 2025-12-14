#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)56679;
long long int var_5 = -1284699852773868280LL;
int var_7 = -368720372;
unsigned short var_9 = (unsigned short)525;
int var_10 = 960901177;
int zero = 0;
unsigned int var_19 = 424857321U;
unsigned int var_20 = 421519126U;
void init() {
}

void checksum() {
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
