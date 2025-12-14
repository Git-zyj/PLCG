#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)192;
_Bool var_4 = (_Bool)0;
long long int var_6 = 7423585625197465743LL;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 493832886U;
int zero = 0;
unsigned int var_10 = 2879137053U;
unsigned short var_11 = (unsigned short)17717;
unsigned long long int var_12 = 16262459955926656002ULL;
int var_13 = -1395683401;
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
