#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)247;
unsigned long long int var_3 = 5494896363736209765ULL;
int var_4 = 1800200484;
unsigned int var_5 = 3036168281U;
unsigned char var_6 = (unsigned char)222;
long long int var_9 = -3350305262953571986LL;
int var_14 = 23721059;
int zero = 0;
signed char var_18 = (signed char)43;
short var_19 = (short)28899;
long long int var_20 = 1978344104772240096LL;
unsigned int var_21 = 1020571896U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
