#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_16 = (short)-25888;
long long int var_18 = -7151796510535278719LL;
long long int var_19 = 5267660673146596049LL;
int zero = 0;
unsigned char var_20 = (unsigned char)163;
signed char var_21 = (signed char)96;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
