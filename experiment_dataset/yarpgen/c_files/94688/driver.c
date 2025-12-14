#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16438582690663091443ULL;
unsigned long long int var_1 = 16231609083185467800ULL;
unsigned long long int var_2 = 11405576272467720064ULL;
short var_3 = (short)-14153;
unsigned long long int var_6 = 18432609219358915550ULL;
unsigned long long int var_7 = 17020550952407574620ULL;
unsigned long long int var_9 = 7248109275917351390ULL;
unsigned long long int var_10 = 12773788547446374278ULL;
int zero = 0;
short var_12 = (short)14880;
unsigned long long int var_13 = 11190294272176927565ULL;
unsigned long long int var_14 = 2713383349332779643ULL;
unsigned long long int var_15 = 15584257194869138736ULL;
unsigned long long int var_16 = 2760777513307822000ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
