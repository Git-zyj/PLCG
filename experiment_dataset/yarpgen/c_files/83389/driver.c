#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)54;
int var_2 = -1476113348;
signed char var_3 = (signed char)33;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 11960118278231783480ULL;
long long int var_7 = 2987814111358893871LL;
long long int var_8 = -538152462271889707LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = -1382225858;
long long int var_12 = -7137918714716943184LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
