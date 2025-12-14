#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)27121;
short var_8 = (short)26814;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 8361425178638863746ULL;
unsigned long long int var_13 = 4489049890021516751ULL;
int zero = 0;
int var_18 = -1705560056;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 16798677519470683551ULL;
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
