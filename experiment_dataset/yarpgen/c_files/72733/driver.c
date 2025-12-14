#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8213340059682864359ULL;
long long int var_8 = 200149181822801354LL;
unsigned short var_12 = (unsigned short)26544;
int var_13 = -1894887990;
int zero = 0;
unsigned long long int var_14 = 18346197463995508235ULL;
long long int var_15 = 4844515682874645577LL;
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
