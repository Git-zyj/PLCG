#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3754901277771156005LL;
long long int var_4 = -8682676351550917629LL;
unsigned short var_8 = (unsigned short)16730;
unsigned long long int var_11 = 14152234406471644291ULL;
unsigned int var_12 = 1457002675U;
unsigned char var_13 = (unsigned char)221;
int zero = 0;
unsigned char var_16 = (unsigned char)94;
long long int var_17 = -5898394372695212962LL;
unsigned long long int var_18 = 1367624071868104528ULL;
void init() {
}

void checksum() {
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
