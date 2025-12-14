#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -503299971;
signed char var_1 = (signed char)108;
unsigned int var_3 = 2974778899U;
short var_5 = (short)-9786;
int var_6 = 1841935926;
int var_7 = -1562398649;
short var_9 = (short)9905;
int zero = 0;
short var_13 = (short)2577;
int var_14 = 573937268;
unsigned char var_15 = (unsigned char)154;
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
