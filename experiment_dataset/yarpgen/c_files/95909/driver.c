#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)228;
short var_1 = (short)6919;
long long int var_2 = -114779219058389611LL;
signed char var_5 = (signed char)51;
int var_8 = 1756189525;
short var_11 = (short)29843;
short var_13 = (short)10971;
int zero = 0;
signed char var_15 = (signed char)-55;
signed char var_16 = (signed char)35;
void init() {
}

void checksum() {
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
