#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-25;
signed char var_1 = (signed char)115;
long long int var_3 = -1651214628654728451LL;
unsigned int var_5 = 1605018355U;
unsigned int var_6 = 1136251383U;
int var_7 = -1055130232;
unsigned char var_9 = (unsigned char)19;
_Bool var_10 = (_Bool)0;
int var_11 = 1519259422;
int zero = 0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)61;
short var_14 = (short)32670;
unsigned char var_15 = (unsigned char)238;
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
