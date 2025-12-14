#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)38;
signed char var_2 = (signed char)-99;
unsigned short var_9 = (unsigned short)50;
short var_13 = (short)-1725;
int zero = 0;
long long int var_15 = 5375200573042969618LL;
long long int var_16 = 1840998765345622860LL;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)79;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
