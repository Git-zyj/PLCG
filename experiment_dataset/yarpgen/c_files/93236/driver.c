#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)5690;
unsigned char var_4 = (unsigned char)236;
unsigned long long int var_7 = 4906094183639696593ULL;
unsigned char var_8 = (unsigned char)6;
int var_9 = -1380935407;
int zero = 0;
unsigned int var_10 = 1903010329U;
unsigned int var_11 = 2052208775U;
unsigned char var_12 = (unsigned char)221;
unsigned short var_13 = (unsigned short)59976;
unsigned int var_14 = 1837296116U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
