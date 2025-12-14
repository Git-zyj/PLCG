#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_5 = (signed char)-85;
unsigned int var_7 = 1143850657U;
unsigned int var_9 = 910896095U;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)12013;
int zero = 0;
signed char var_15 = (signed char)-77;
long long int var_16 = -6982352152921751139LL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
