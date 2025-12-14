#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1639253193951386699ULL;
unsigned char var_4 = (unsigned char)30;
long long int var_6 = 4217365321882236058LL;
long long int var_11 = -1018550262124694606LL;
short var_14 = (short)-27509;
int zero = 0;
signed char var_20 = (signed char)68;
unsigned int var_21 = 1601307804U;
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
