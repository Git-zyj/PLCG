#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)186;
unsigned char var_1 = (unsigned char)28;
unsigned long long int var_4 = 5958754061635502594ULL;
short var_10 = (short)17023;
int zero = 0;
signed char var_18 = (signed char)-41;
unsigned int var_19 = 3981771910U;
unsigned char var_20 = (unsigned char)153;
unsigned short var_21 = (unsigned short)50451;
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
