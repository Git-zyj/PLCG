#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)70;
signed char var_1 = (signed char)68;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
long long int var_9 = 123294516271041572LL;
int var_10 = 1309936421;
unsigned int var_12 = 870230226U;
int zero = 0;
short var_14 = (short)-22975;
unsigned int var_15 = 2514692538U;
signed char var_16 = (signed char)-77;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)125;
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
