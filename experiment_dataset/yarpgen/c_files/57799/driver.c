#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-17;
unsigned int var_8 = 1096725080U;
unsigned char var_10 = (unsigned char)179;
long long int var_12 = -7161506174278230201LL;
int var_15 = -1593835534;
int zero = 0;
long long int var_19 = 4395329369166328671LL;
int var_20 = -1838399398;
void init() {
}

void checksum() {
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
