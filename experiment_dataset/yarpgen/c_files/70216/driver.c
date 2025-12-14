#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)175;
signed char var_4 = (signed char)94;
long long int var_15 = -7356588657549603794LL;
int zero = 0;
signed char var_19 = (signed char)-3;
unsigned char var_20 = (unsigned char)251;
unsigned int var_21 = 1441202951U;
unsigned long long int var_22 = 13566048695495583604ULL;
short var_23 = (short)-25313;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
