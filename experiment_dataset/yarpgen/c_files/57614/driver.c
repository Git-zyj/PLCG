#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22058;
unsigned int var_1 = 3325740591U;
unsigned char var_9 = (unsigned char)51;
unsigned long long int var_10 = 17270715591534666514ULL;
short var_12 = (short)22299;
int zero = 0;
unsigned long long int var_17 = 3809736037816118004ULL;
short var_18 = (short)-7419;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-112;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
