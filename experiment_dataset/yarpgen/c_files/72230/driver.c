#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4187136252U;
unsigned int var_9 = 3106271363U;
unsigned int var_14 = 193351485U;
int zero = 0;
unsigned char var_18 = (unsigned char)202;
signed char var_19 = (signed char)126;
int var_20 = 745869569;
void init() {
}

void checksum() {
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
