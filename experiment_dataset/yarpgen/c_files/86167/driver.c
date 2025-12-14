#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)5146;
long long int var_8 = -2677610999710091938LL;
signed char var_9 = (signed char)61;
short var_12 = (short)-15776;
int zero = 0;
signed char var_14 = (signed char)-124;
long long int var_15 = -4487179294399531303LL;
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
