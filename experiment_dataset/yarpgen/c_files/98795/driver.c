#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31717;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)29102;
unsigned char var_4 = (unsigned char)156;
unsigned long long int var_6 = 6229370045443130040ULL;
unsigned short var_7 = (unsigned short)11425;
unsigned int var_8 = 3443878659U;
long long int var_9 = 3968616837311413650LL;
int zero = 0;
int var_10 = 669911903;
long long int var_11 = -7331334069453765868LL;
unsigned long long int var_12 = 6977437117527538975ULL;
unsigned long long int var_13 = 16175503519980026867ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
