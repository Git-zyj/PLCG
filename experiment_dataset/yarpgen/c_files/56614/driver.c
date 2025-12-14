#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1271364658U;
unsigned short var_2 = (unsigned short)32109;
int var_6 = -1066952359;
int var_14 = 1259879908;
signed char var_15 = (signed char)104;
unsigned short var_16 = (unsigned short)15144;
int zero = 0;
signed char var_18 = (signed char)112;
unsigned int var_19 = 647152019U;
void init() {
}

void checksum() {
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
