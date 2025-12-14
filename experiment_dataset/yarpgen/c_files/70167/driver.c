#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1096580522685308112LL;
int var_1 = 632410636;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)58;
int var_8 = 401393969;
unsigned char var_9 = (unsigned char)224;
unsigned long long int var_10 = 18129816902909171734ULL;
long long int var_12 = -7408846750730363212LL;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 704294827U;
unsigned int var_15 = 2117061571U;
unsigned char var_16 = (unsigned char)156;
int zero = 0;
signed char var_18 = (signed char)-112;
long long int var_19 = -4285107502789710312LL;
unsigned char var_20 = (unsigned char)63;
signed char var_21 = (signed char)-49;
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
