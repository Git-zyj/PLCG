#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)10;
signed char var_2 = (signed char)-40;
unsigned int var_3 = 518638156U;
short var_4 = (short)4918;
short var_6 = (short)1892;
unsigned char var_9 = (unsigned char)116;
int zero = 0;
signed char var_10 = (signed char)-56;
unsigned short var_11 = (unsigned short)57430;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
