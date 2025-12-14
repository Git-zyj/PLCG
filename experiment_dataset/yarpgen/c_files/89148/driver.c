#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)2143;
int var_4 = -1517550824;
unsigned long long int var_6 = 11476780415452602342ULL;
short var_8 = (short)-30449;
signed char var_11 = (signed char)109;
int zero = 0;
long long int var_20 = 4417335752791368470LL;
unsigned char var_21 = (unsigned char)133;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
