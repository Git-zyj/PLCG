#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)124;
long long int var_1 = -3823754426401955886LL;
long long int var_2 = 3193905132789859717LL;
int var_3 = 1441634981;
long long int var_4 = -8232558781289520676LL;
_Bool var_5 = (_Bool)0;
short var_7 = (short)-21070;
long long int var_8 = -802956597635763132LL;
signed char var_9 = (signed char)-123;
short var_10 = (short)15234;
long long int var_12 = 1909093505432469699LL;
short var_13 = (short)25345;
unsigned int var_14 = 3539540426U;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)89;
unsigned char var_19 = (unsigned char)72;
unsigned char var_20 = (unsigned char)250;
int var_21 = 494521985;
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
