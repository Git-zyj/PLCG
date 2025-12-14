#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 78485071;
_Bool var_1 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 3644261751U;
int var_10 = 546103384;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_12 = (signed char)-87;
unsigned char var_13 = (unsigned char)64;
long long int var_14 = -9191439013395100739LL;
signed char var_15 = (signed char)111;
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
