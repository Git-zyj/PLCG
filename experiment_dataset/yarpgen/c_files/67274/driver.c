#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 701675956U;
int var_6 = 1469397762;
short var_7 = (short)16367;
long long int var_15 = 8329136280250556594LL;
int zero = 0;
unsigned int var_16 = 915959247U;
unsigned char var_17 = (unsigned char)168;
unsigned char var_18 = (unsigned char)94;
unsigned int var_19 = 1815659151U;
long long int var_20 = 5511097374788121768LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
