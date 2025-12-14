#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)105;
signed char var_4 = (signed char)-58;
unsigned int var_8 = 3992419171U;
unsigned int var_9 = 2710812567U;
unsigned int var_11 = 3065738441U;
unsigned short var_13 = (unsigned short)22101;
int zero = 0;
unsigned int var_14 = 2614778627U;
unsigned short var_15 = (unsigned short)37202;
int var_16 = -2048446324;
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
