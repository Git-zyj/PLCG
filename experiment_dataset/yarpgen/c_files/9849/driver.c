#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)0;
long long int var_7 = -1438166117270298562LL;
_Bool var_9 = (_Bool)1;
unsigned int var_11 = 840163475U;
int zero = 0;
int var_12 = -1059819718;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)50254;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
