#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3251118982538956847ULL;
unsigned char var_4 = (unsigned char)55;
signed char var_8 = (signed char)91;
unsigned long long int var_13 = 10819611787569247114ULL;
int zero = 0;
unsigned int var_17 = 2766122152U;
unsigned long long int var_18 = 12646614766200942302ULL;
void init() {
}

void checksum() {
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
