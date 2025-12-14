#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -757011139;
unsigned char var_3 = (unsigned char)228;
signed char var_6 = (signed char)-64;
unsigned long long int var_9 = 12634517807148106452ULL;
signed char var_10 = (signed char)50;
int zero = 0;
int var_13 = -690446850;
int var_14 = 1471175038;
signed char var_15 = (signed char)104;
unsigned short var_16 = (unsigned short)49606;
unsigned char var_17 = (unsigned char)221;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
