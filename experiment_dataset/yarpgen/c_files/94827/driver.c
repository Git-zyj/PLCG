#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-27;
unsigned int var_4 = 647081062U;
int var_5 = -913821193;
unsigned long long int var_7 = 621809479767511557ULL;
unsigned int var_13 = 43731555U;
int zero = 0;
unsigned int var_18 = 1996257011U;
unsigned long long int var_19 = 13534769915487665973ULL;
void init() {
}

void checksum() {
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
