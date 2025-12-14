#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-89;
unsigned short var_3 = (unsigned short)3021;
short var_6 = (short)-14982;
short var_7 = (short)-24925;
unsigned short var_9 = (unsigned short)5837;
int zero = 0;
long long int var_12 = -5218013702192783680LL;
long long int var_13 = -8419272742566231494LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
