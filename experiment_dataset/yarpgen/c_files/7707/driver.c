#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)150;
signed char var_4 = (signed char)-20;
long long int var_7 = 6711972955053532667LL;
short var_9 = (short)-10534;
unsigned int var_11 = 534127528U;
unsigned long long int var_13 = 7398513798331096962ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)12992;
signed char var_19 = (signed char)90;
unsigned long long int var_20 = 10987945828987288955ULL;
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
