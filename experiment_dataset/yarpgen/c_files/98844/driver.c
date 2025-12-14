#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4955;
unsigned long long int var_2 = 13147890556051779227ULL;
unsigned long long int var_9 = 10763329221654915462ULL;
int zero = 0;
int var_19 = -167178599;
unsigned long long int var_20 = 11448711445000381927ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
