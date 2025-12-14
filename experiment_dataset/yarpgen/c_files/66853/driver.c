#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)87;
unsigned long long int var_2 = 13971615557313402178ULL;
unsigned int var_6 = 4039453489U;
int var_7 = 1531460084;
unsigned short var_9 = (unsigned short)44662;
long long int var_11 = -4076481137080080834LL;
int zero = 0;
int var_12 = 1906805518;
unsigned long long int var_13 = 4603186981651632257ULL;
unsigned short var_14 = (unsigned short)33822;
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
