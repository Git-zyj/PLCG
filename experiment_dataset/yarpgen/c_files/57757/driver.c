#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 304823405;
unsigned int var_4 = 154343867U;
unsigned long long int var_5 = 10628740650867921036ULL;
unsigned long long int var_7 = 1116504531266374550ULL;
signed char var_10 = (signed char)-9;
unsigned long long int var_11 = 14269049272471277702ULL;
int zero = 0;
short var_13 = (short)24871;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3370004060U;
long long int var_16 = 2332682845818524474LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
