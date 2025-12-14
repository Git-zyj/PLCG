#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -274876392;
int var_6 = -1821141457;
long long int var_12 = -2415988746172199510LL;
unsigned char var_14 = (unsigned char)149;
int zero = 0;
int var_15 = -171523188;
signed char var_16 = (signed char)55;
long long int var_17 = -1557807499419226896LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
