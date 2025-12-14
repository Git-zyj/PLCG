#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1113850667U;
unsigned int var_3 = 1863472557U;
unsigned char var_4 = (unsigned char)134;
unsigned long long int var_5 = 10609439279864872130ULL;
int var_6 = 1267091103;
int zero = 0;
signed char var_11 = (signed char)109;
unsigned short var_12 = (unsigned short)50888;
int var_13 = -1822800815;
short var_14 = (short)-11817;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
