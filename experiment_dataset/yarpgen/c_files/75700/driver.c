#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)232;
unsigned int var_2 = 994314411U;
long long int var_3 = -5492650190984768505LL;
short var_4 = (short)18466;
unsigned char var_7 = (unsigned char)40;
long long int var_9 = -5749008070391617677LL;
int zero = 0;
int var_10 = 2036787631;
unsigned int var_11 = 2144763607U;
unsigned short var_12 = (unsigned short)56624;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
