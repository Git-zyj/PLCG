#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1362237207;
long long int var_2 = -2234427842027054495LL;
unsigned int var_3 = 3562078975U;
unsigned long long int var_7 = 11259023511784712945ULL;
unsigned char var_16 = (unsigned char)21;
int zero = 0;
signed char var_17 = (signed char)114;
unsigned short var_18 = (unsigned short)49781;
signed char var_19 = (signed char)-17;
unsigned int var_20 = 2504319386U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
