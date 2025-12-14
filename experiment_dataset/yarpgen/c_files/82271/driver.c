#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-3;
unsigned short var_6 = (unsigned short)32640;
short var_10 = (short)-1957;
int zero = 0;
unsigned char var_12 = (unsigned char)59;
unsigned long long int var_13 = 3939018055924043660ULL;
unsigned long long int var_14 = 6524953940182878595ULL;
void init() {
}

void checksum() {
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
