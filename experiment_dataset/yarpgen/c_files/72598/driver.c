#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1638107101U;
unsigned char var_8 = (unsigned char)189;
signed char var_10 = (signed char)-112;
int var_12 = -1077558939;
long long int var_13 = 1198299388470653389LL;
int zero = 0;
unsigned long long int var_16 = 10878166982972951169ULL;
unsigned short var_17 = (unsigned short)7440;
signed char var_18 = (signed char)57;
void init() {
}

void checksum() {
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
