#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3778172969U;
int var_3 = 500422310;
unsigned int var_4 = 1991173195U;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)45;
_Bool var_11 = (_Bool)0;
unsigned char var_15 = (unsigned char)84;
int zero = 0;
signed char var_18 = (signed char)-124;
long long int var_19 = 3668585345732126526LL;
unsigned long long int var_20 = 15451536101374407454ULL;
signed char var_21 = (signed char)-111;
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
