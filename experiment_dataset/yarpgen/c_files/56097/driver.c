#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7049007177203636132LL;
unsigned short var_10 = (unsigned short)19855;
signed char var_11 = (signed char)82;
signed char var_15 = (signed char)-50;
int zero = 0;
signed char var_18 = (signed char)-43;
int var_19 = -643285796;
int var_20 = -1951964440;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
