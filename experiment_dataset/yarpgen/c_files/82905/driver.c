#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -609117194;
unsigned int var_8 = 3866616602U;
signed char var_11 = (signed char)-28;
signed char var_15 = (signed char)99;
unsigned short var_16 = (unsigned short)14224;
int zero = 0;
unsigned int var_19 = 4226034011U;
long long int var_20 = -730470360815757726LL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
