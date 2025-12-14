#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21120;
signed char var_2 = (signed char)83;
unsigned int var_3 = 1933561447U;
signed char var_4 = (signed char)115;
short var_6 = (short)672;
unsigned int var_11 = 1914821850U;
int zero = 0;
signed char var_12 = (signed char)-27;
unsigned char var_13 = (unsigned char)39;
unsigned int var_14 = 1659823226U;
short var_15 = (short)-13609;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
