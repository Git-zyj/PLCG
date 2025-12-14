#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8475106804677197598ULL;
unsigned long long int var_3 = 5712728873255354851ULL;
long long int var_8 = -5149562298918253719LL;
signed char var_9 = (signed char)-22;
unsigned int var_10 = 1235992508U;
short var_13 = (short)-27711;
int var_15 = -814069603;
int zero = 0;
unsigned int var_19 = 171637558U;
unsigned char var_20 = (unsigned char)207;
short var_21 = (short)-3713;
unsigned char var_22 = (unsigned char)188;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
