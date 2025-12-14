#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13077015250896022115ULL;
unsigned short var_3 = (unsigned short)46172;
long long int var_9 = -8073452885809344915LL;
short var_13 = (short)-4823;
int zero = 0;
signed char var_15 = (signed char)-38;
unsigned char var_16 = (unsigned char)227;
unsigned char var_17 = (unsigned char)180;
signed char var_18 = (signed char)25;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
