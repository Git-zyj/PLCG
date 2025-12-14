#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)48963;
unsigned long long int var_3 = 1387187473419782274ULL;
int var_4 = 540157482;
short var_5 = (short)3895;
unsigned long long int var_6 = 15831459781101286848ULL;
signed char var_11 = (signed char)12;
long long int var_12 = 5103521628740291434LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_18 = -1325281705;
long long int var_19 = 8098199707307634746LL;
unsigned long long int var_20 = 1696484427328109707ULL;
unsigned int var_21 = 2913449546U;
void init() {
}

void checksum() {
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
