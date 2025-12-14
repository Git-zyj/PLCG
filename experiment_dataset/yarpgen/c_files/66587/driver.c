#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)140;
short var_4 = (short)-20161;
unsigned char var_9 = (unsigned char)191;
unsigned int var_11 = 2920361739U;
unsigned long long int var_15 = 4917140120846456109ULL;
unsigned int var_16 = 4200032966U;
unsigned short var_18 = (unsigned short)57887;
int zero = 0;
unsigned long long int var_19 = 7429956140939739932ULL;
int var_20 = -218604871;
void init() {
}

void checksum() {
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
