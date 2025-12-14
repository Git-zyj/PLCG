#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2079748834U;
unsigned short var_2 = (unsigned short)44293;
long long int var_3 = -1824287230473894809LL;
_Bool var_5 = (_Bool)0;
unsigned char var_10 = (unsigned char)180;
long long int var_13 = 6236667225058211183LL;
int zero = 0;
unsigned char var_14 = (unsigned char)20;
signed char var_15 = (signed char)-59;
unsigned char var_16 = (unsigned char)186;
unsigned char var_17 = (unsigned char)250;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
