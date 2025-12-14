#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)64121;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int var_10 = 202603270;
int zero = 0;
unsigned char var_15 = (unsigned char)127;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 387899372U;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 1317643055U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
