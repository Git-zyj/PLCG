#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)36547;
signed char var_2 = (signed char)4;
signed char var_5 = (signed char)-38;
int var_6 = 405686380;
int zero = 0;
unsigned int var_11 = 1257602076U;
short var_12 = (short)-27024;
int var_13 = -1889055425;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
