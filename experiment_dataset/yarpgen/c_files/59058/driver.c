#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)215;
_Bool var_3 = (_Bool)0;
long long int var_4 = -9092583141541704849LL;
unsigned int var_6 = 2195384902U;
_Bool var_12 = (_Bool)0;
long long int var_13 = 3042490259214332947LL;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = 4718128812266762812LL;
void init() {
}

void checksum() {
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
