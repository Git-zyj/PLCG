#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3319753076U;
unsigned int var_4 = 137642025U;
signed char var_5 = (signed char)-25;
unsigned long long int var_6 = 10006474792318109149ULL;
unsigned short var_9 = (unsigned short)55600;
short var_10 = (short)27706;
unsigned short var_11 = (unsigned short)48876;
unsigned short var_12 = (unsigned short)50184;
unsigned int var_14 = 3883559899U;
int zero = 0;
unsigned short var_15 = (unsigned short)32148;
unsigned long long int var_16 = 18072678230180690213ULL;
void init() {
}

void checksum() {
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
