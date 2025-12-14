#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)94;
signed char var_2 = (signed char)-11;
int var_3 = -1155848861;
int var_4 = -1154020303;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 2949757936012052135ULL;
long long int var_7 = 5460375700202775074LL;
_Bool var_8 = (_Bool)1;
short var_9 = (short)21335;
int zero = 0;
unsigned long long int var_10 = 12825582697830444329ULL;
int var_11 = -1863934313;
signed char var_12 = (signed char)-59;
unsigned int var_13 = 3129027205U;
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
