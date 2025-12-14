#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 9253095955039741585ULL;
unsigned int var_3 = 1423767345U;
unsigned char var_5 = (unsigned char)225;
unsigned long long int var_6 = 4729572618735407328ULL;
unsigned long long int var_7 = 5206585310487089070ULL;
unsigned char var_8 = (unsigned char)160;
unsigned short var_9 = (unsigned short)60687;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)54;
unsigned int var_12 = 399755424U;
unsigned long long int var_13 = 3510706936300507343ULL;
unsigned char var_14 = (unsigned char)227;
short var_15 = (short)-2502;
int zero = 0;
long long int var_16 = -549624048757569834LL;
short var_17 = (short)8995;
unsigned short var_18 = (unsigned short)13170;
short var_19 = (short)6068;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
