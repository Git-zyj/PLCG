#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)6846;
unsigned char var_6 = (unsigned char)192;
int var_7 = 392511512;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
long long int var_11 = 3138967458240537914LL;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = -143013763;
_Bool var_15 = (_Bool)1;
int var_16 = 1665807926;
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
