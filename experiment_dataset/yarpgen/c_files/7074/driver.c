#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)93;
short var_2 = (short)15841;
unsigned int var_3 = 236424070U;
signed char var_4 = (signed char)-75;
int var_5 = 253554398;
unsigned int var_6 = 4026768679U;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_11 = 4159370789U;
int var_12 = -930292052;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
