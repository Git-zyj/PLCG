#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-25;
unsigned int var_3 = 4064509670U;
unsigned int var_4 = 1803200615U;
int var_5 = 1518161966;
int var_6 = 528702327;
unsigned short var_7 = (unsigned short)44321;
unsigned int var_10 = 4162310248U;
unsigned short var_13 = (unsigned short)23440;
int zero = 0;
long long int var_17 = 8003908239837236787LL;
unsigned int var_18 = 1298430357U;
void init() {
}

void checksum() {
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
