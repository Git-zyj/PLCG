#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)9286;
unsigned long long int var_6 = 4220322846300542498ULL;
int var_9 = 1590803614;
long long int var_12 = -8181974320268451434LL;
int zero = 0;
short var_14 = (short)22893;
signed char var_15 = (signed char)51;
unsigned char var_16 = (unsigned char)195;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
