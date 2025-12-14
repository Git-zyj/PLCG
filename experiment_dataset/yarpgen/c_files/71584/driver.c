#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12056;
unsigned short var_4 = (unsigned short)41497;
unsigned int var_9 = 1222798910U;
unsigned int var_11 = 2117898384U;
unsigned int var_19 = 2589372980U;
int zero = 0;
unsigned int var_20 = 3488275223U;
int var_21 = 595293305;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
