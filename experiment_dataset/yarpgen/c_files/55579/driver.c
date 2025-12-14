#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)18907;
signed char var_9 = (signed char)-63;
signed char var_12 = (signed char)-44;
unsigned long long int var_13 = 12957253702956563955ULL;
short var_14 = (short)6710;
short var_15 = (short)-6381;
int zero = 0;
unsigned long long int var_17 = 6382761982599744838ULL;
int var_18 = 1141932961;
unsigned char var_19 = (unsigned char)27;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
