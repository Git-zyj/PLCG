#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-73;
long long int var_1 = 5242254881954586770LL;
signed char var_7 = (signed char)-23;
unsigned char var_9 = (unsigned char)122;
int var_13 = -1335445593;
signed char var_14 = (signed char)92;
int zero = 0;
unsigned char var_15 = (unsigned char)27;
unsigned short var_16 = (unsigned short)18961;
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
