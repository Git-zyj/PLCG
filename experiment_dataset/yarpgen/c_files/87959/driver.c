#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)52;
long long int var_1 = -2276422782167701360LL;
unsigned long long int var_2 = 4763063459186821585ULL;
long long int var_4 = 4070971547293664411LL;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)58781;
signed char var_8 = (signed char)-24;
unsigned int var_9 = 2345556135U;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 9993642867052946413ULL;
_Bool var_15 = (_Bool)0;
long long int var_16 = 1233566646445474083LL;
long long int var_17 = 552409872708083418LL;
signed char var_18 = (signed char)-44;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
