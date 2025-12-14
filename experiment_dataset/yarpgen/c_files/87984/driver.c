#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)223;
long long int var_5 = 1346158611303977368LL;
unsigned int var_8 = 826375832U;
unsigned short var_9 = (unsigned short)39235;
unsigned char var_10 = (unsigned char)83;
short var_12 = (short)4206;
short var_13 = (short)29987;
int zero = 0;
short var_15 = (short)30994;
unsigned long long int var_16 = 5064990796030213119ULL;
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
