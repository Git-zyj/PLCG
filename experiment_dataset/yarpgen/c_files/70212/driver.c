#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-106;
signed char var_2 = (signed char)76;
signed char var_8 = (signed char)-28;
int zero = 0;
signed char var_14 = (signed char)-103;
unsigned short var_15 = (unsigned short)35199;
unsigned short var_16 = (unsigned short)9426;
unsigned long long int var_17 = 11575759445589260276ULL;
signed char var_18 = (signed char)28;
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
