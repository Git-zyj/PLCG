#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned int var_6 = 3997161949U;
unsigned short var_7 = (unsigned short)2068;
unsigned int var_9 = 2393570536U;
int var_11 = 1613986217;
long long int var_12 = -8423958263523017372LL;
signed char var_14 = (signed char)96;
signed char var_17 = (signed char)-78;
int zero = 0;
int var_18 = 359523799;
unsigned short var_19 = (unsigned short)59396;
long long int var_20 = 4042470926837100145LL;
int var_21 = 2075447300;
unsigned short var_22 = (unsigned short)47920;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
