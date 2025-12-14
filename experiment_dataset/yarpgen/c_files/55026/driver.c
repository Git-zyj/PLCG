#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3007343296U;
long long int var_5 = 4788842905572921516LL;
_Bool var_9 = (_Bool)1;
long long int var_13 = -606256794493129293LL;
unsigned char var_14 = (unsigned char)173;
int zero = 0;
long long int var_15 = 7097351085093936166LL;
long long int var_16 = -5809378968861373942LL;
unsigned char var_17 = (unsigned char)220;
unsigned long long int var_18 = 17584463923558301277ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
