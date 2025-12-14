#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3553370049U;
long long int var_1 = 2170690386484826363LL;
unsigned char var_2 = (unsigned char)172;
unsigned int var_3 = 17009638U;
unsigned short var_12 = (unsigned short)62746;
unsigned int var_13 = 2846942658U;
unsigned int var_18 = 1539223486U;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)201;
unsigned int var_21 = 1471569037U;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
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
