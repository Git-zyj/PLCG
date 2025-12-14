#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7153713906788729593LL;
unsigned long long int var_3 = 7653797119717022253ULL;
unsigned short var_4 = (unsigned short)24189;
int zero = 0;
long long int var_11 = 4351728207376159435LL;
unsigned int var_12 = 3800501715U;
void init() {
}

void checksum() {
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
