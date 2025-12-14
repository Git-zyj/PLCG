#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6094136889351226460ULL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 5961087034840376710ULL;
unsigned long long int var_14 = 8746905750619308230ULL;
unsigned long long int var_17 = 7049460442984231618ULL;
signed char var_18 = (signed char)123;
int zero = 0;
unsigned short var_20 = (unsigned short)10038;
unsigned long long int var_21 = 2024275049132173332ULL;
int var_22 = 1147880156;
int var_23 = -383071715;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
