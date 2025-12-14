#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1502625317;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 14452984489796629631ULL;
unsigned short var_6 = (unsigned short)51579;
unsigned int var_8 = 2410212782U;
unsigned int var_11 = 1431696341U;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)54;
_Bool var_14 = (_Bool)0;
long long int var_15 = 5646750666528605844LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
