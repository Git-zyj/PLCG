#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)14043;
unsigned int var_9 = 967354540U;
int var_10 = -1189669204;
long long int var_13 = 4155307758177739819LL;
unsigned short var_15 = (unsigned short)3063;
unsigned int var_16 = 3036892570U;
int zero = 0;
unsigned long long int var_20 = 12451494435874949242ULL;
short var_21 = (short)-503;
unsigned short var_22 = (unsigned short)45706;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
