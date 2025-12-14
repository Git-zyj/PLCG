#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23017;
short var_5 = (short)-2016;
short var_7 = (short)-1458;
unsigned long long int var_9 = 15242386651164847134ULL;
unsigned short var_13 = (unsigned short)50913;
unsigned short var_14 = (unsigned short)61417;
int zero = 0;
unsigned long long int var_17 = 10236317815500083937ULL;
int var_18 = -199038313;
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
