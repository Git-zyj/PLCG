#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 334062040;
unsigned int var_2 = 3226634352U;
unsigned short var_12 = (unsigned short)7024;
int zero = 0;
unsigned char var_17 = (unsigned char)141;
signed char var_18 = (signed char)108;
int var_19 = 168955154;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
