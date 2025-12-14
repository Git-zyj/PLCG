#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-32;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)20;
unsigned char var_10 = (unsigned char)133;
unsigned long long int var_11 = 14633373724575217017ULL;
int zero = 0;
unsigned int var_17 = 1950813973U;
unsigned long long int var_18 = 17042438786087774762ULL;
long long int var_19 = 1353168350366474372LL;
unsigned long long int var_20 = 14841268541570134450ULL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
