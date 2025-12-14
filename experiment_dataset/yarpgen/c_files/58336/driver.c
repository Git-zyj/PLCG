#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8102386674528172647LL;
unsigned short var_6 = (unsigned short)26545;
unsigned char var_8 = (unsigned char)19;
int zero = 0;
signed char var_12 = (signed char)-113;
unsigned long long int var_13 = 10879337251199660963ULL;
unsigned int var_14 = 3529952351U;
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
