#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)126;
unsigned short var_2 = (unsigned short)54253;
unsigned long long int var_6 = 5850491354265002977ULL;
unsigned char var_7 = (unsigned char)57;
signed char var_8 = (signed char)19;
_Bool var_10 = (_Bool)0;
unsigned short var_12 = (unsigned short)61160;
int zero = 0;
signed char var_14 = (signed char)-63;
signed char var_15 = (signed char)34;
void init() {
}

void checksum() {
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
