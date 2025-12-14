#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 531814056;
short var_6 = (short)6288;
unsigned char var_15 = (unsigned char)246;
signed char var_16 = (signed char)21;
int zero = 0;
unsigned short var_18 = (unsigned short)35004;
unsigned short var_19 = (unsigned short)61655;
signed char var_20 = (signed char)-97;
void init() {
}

void checksum() {
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
