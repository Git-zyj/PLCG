#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16413263618669247155ULL;
unsigned char var_2 = (unsigned char)8;
unsigned short var_9 = (unsigned short)24963;
unsigned int var_10 = 2273522822U;
long long int var_15 = -9148825164627548832LL;
int zero = 0;
unsigned short var_18 = (unsigned short)45742;
unsigned short var_19 = (unsigned short)19073;
void init() {
}

void checksum() {
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
