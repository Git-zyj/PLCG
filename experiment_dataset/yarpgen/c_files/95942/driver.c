#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6035455330806002385ULL;
unsigned char var_4 = (unsigned char)46;
unsigned long long int var_6 = 3787992947662491768ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)58217;
unsigned long long int var_15 = 9688075445796861747ULL;
int var_16 = -883712919;
unsigned long long int var_17 = 18149300560763031762ULL;
long long int var_18 = 163883722239604067LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
