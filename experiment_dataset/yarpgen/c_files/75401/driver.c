#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2069443598U;
unsigned char var_4 = (unsigned char)46;
_Bool var_5 = (_Bool)1;
int var_9 = 436016213;
long long int var_10 = -4752202323098640571LL;
int var_11 = 1669058489;
int zero = 0;
unsigned short var_19 = (unsigned short)7711;
_Bool var_20 = (_Bool)0;
long long int var_21 = 8884895625302009717LL;
void init() {
}

void checksum() {
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
