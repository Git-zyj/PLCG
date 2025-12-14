#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-33;
unsigned int var_9 = 68371626U;
signed char var_10 = (signed char)-40;
int zero = 0;
unsigned char var_11 = (unsigned char)144;
long long int var_12 = 4048268140057139187LL;
signed char var_13 = (signed char)0;
int var_14 = 323598223;
unsigned short var_15 = (unsigned short)44116;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
