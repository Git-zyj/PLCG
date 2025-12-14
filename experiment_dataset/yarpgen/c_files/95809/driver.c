#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44487;
unsigned int var_2 = 844454628U;
unsigned short var_5 = (unsigned short)52616;
int var_8 = -1862742397;
unsigned int var_10 = 2402471378U;
int zero = 0;
long long int var_15 = 5936325911566586152LL;
unsigned char var_16 = (unsigned char)13;
unsigned int var_17 = 3056975541U;
void init() {
}

void checksum() {
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
