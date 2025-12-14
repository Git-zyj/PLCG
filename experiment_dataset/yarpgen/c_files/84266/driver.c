#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)13308;
unsigned short var_3 = (unsigned short)63687;
unsigned long long int var_5 = 675359342518469560ULL;
signed char var_6 = (signed char)127;
signed char var_8 = (signed char)5;
unsigned short var_9 = (unsigned short)26832;
unsigned short var_10 = (unsigned short)40868;
int zero = 0;
unsigned long long int var_11 = 8626387627893689695ULL;
unsigned long long int var_12 = 15820035068636677620ULL;
void init() {
}

void checksum() {
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
