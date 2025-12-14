#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)26601;
short var_4 = (short)12255;
int var_9 = -1058754565;
signed char var_10 = (signed char)-26;
int var_11 = -1612083923;
int zero = 0;
short var_17 = (short)-16614;
unsigned int var_18 = 4097487509U;
signed char var_19 = (signed char)-21;
unsigned char var_20 = (unsigned char)182;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
