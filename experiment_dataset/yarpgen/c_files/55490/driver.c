#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 778180020U;
unsigned char var_2 = (unsigned char)179;
long long int var_5 = -3705730986552601083LL;
unsigned int var_8 = 2549033210U;
signed char var_9 = (signed char)-105;
unsigned short var_10 = (unsigned short)45677;
short var_13 = (short)-1028;
int zero = 0;
unsigned short var_14 = (unsigned short)32704;
unsigned short var_15 = (unsigned short)55980;
long long int var_16 = -5390026835202742721LL;
void init() {
}

void checksum() {
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
