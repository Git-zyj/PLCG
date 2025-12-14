#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)41172;
short var_2 = (short)-22652;
_Bool var_3 = (_Bool)0;
int var_5 = -1955806876;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 17480398346525251192ULL;
unsigned int var_10 = 2649624493U;
signed char var_12 = (signed char)-54;
int zero = 0;
unsigned short var_13 = (unsigned short)36967;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)22190;
void init() {
}

void checksum() {
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
