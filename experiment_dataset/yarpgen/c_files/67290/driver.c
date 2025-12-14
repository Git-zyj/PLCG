#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-21053;
unsigned short var_3 = (unsigned short)2907;
unsigned short var_4 = (unsigned short)50897;
int zero = 0;
signed char var_12 = (signed char)120;
unsigned long long int var_13 = 5682927754752565947ULL;
unsigned short var_14 = (unsigned short)52661;
unsigned int var_15 = 2845854850U;
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
