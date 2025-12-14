#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -6630523063559526111LL;
unsigned int var_8 = 2033509769U;
short var_12 = (short)-3790;
signed char var_13 = (signed char)-40;
int zero = 0;
signed char var_16 = (signed char)-20;
signed char var_17 = (signed char)-40;
unsigned long long int var_18 = 12592669637633593419ULL;
long long int var_19 = 4059344199956558184LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
