#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5331619464808984975LL;
signed char var_3 = (signed char)-123;
long long int var_4 = 7525680445835409664LL;
unsigned int var_8 = 148922188U;
int var_9 = 332294375;
int zero = 0;
unsigned char var_17 = (unsigned char)49;
unsigned char var_18 = (unsigned char)227;
int var_19 = -212018848;
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
