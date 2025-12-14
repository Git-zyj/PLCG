#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)20415;
int var_3 = 2031809068;
unsigned char var_8 = (unsigned char)102;
short var_9 = (short)-1447;
unsigned int var_11 = 2450110482U;
_Bool var_15 = (_Bool)0;
long long int var_16 = 3575048917848103715LL;
short var_17 = (short)-5614;
long long int var_18 = 3031961085805696149LL;
int zero = 0;
short var_20 = (short)4132;
short var_21 = (short)-10902;
signed char var_22 = (signed char)-117;
unsigned long long int var_23 = 16076913468905887155ULL;
_Bool var_24 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
