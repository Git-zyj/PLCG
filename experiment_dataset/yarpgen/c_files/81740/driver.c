#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4238624897U;
unsigned char var_2 = (unsigned char)43;
unsigned int var_3 = 1160221135U;
long long int var_4 = 15912654544257567LL;
int zero = 0;
unsigned short var_12 = (unsigned short)19003;
unsigned short var_13 = (unsigned short)43266;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
