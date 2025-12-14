#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57342;
unsigned long long int var_2 = 2162449882103374492ULL;
unsigned char var_4 = (unsigned char)155;
unsigned long long int var_5 = 12432021105074189282ULL;
signed char var_10 = (signed char)-41;
unsigned int var_12 = 2704333655U;
int zero = 0;
unsigned int var_13 = 2555664291U;
unsigned short var_14 = (unsigned short)14795;
unsigned long long int var_15 = 12427716991764544830ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
