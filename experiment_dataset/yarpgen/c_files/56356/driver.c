#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12797069099323849260ULL;
signed char var_2 = (signed char)-58;
unsigned short var_3 = (unsigned short)53646;
unsigned char var_6 = (unsigned char)4;
unsigned int var_8 = 790025897U;
signed char var_10 = (signed char)81;
int zero = 0;
unsigned char var_13 = (unsigned char)129;
unsigned short var_14 = (unsigned short)35962;
unsigned long long int var_15 = 14034124693583098611ULL;
_Bool var_16 = (_Bool)1;
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
