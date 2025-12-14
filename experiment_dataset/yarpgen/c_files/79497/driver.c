#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9345035290402310578ULL;
int var_5 = 1704507957;
int var_7 = -1295029024;
unsigned long long int var_8 = 9105729743338800708ULL;
int var_13 = 885116800;
int zero = 0;
short var_17 = (short)-7580;
unsigned short var_18 = (unsigned short)62094;
short var_19 = (short)-13091;
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
