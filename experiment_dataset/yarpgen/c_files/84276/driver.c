#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46141;
unsigned long long int var_2 = 5127889860887620424ULL;
signed char var_4 = (signed char)-4;
unsigned short var_8 = (unsigned short)19747;
int zero = 0;
_Bool var_11 = (_Bool)0;
int var_12 = 1011281458;
unsigned int var_13 = 139231980U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
