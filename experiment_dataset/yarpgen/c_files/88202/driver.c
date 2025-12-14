#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-29735;
int var_4 = -922935413;
unsigned int var_10 = 3665799245U;
unsigned long long int var_11 = 10726594381679571734ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)0;
unsigned char var_13 = (unsigned char)15;
_Bool var_14 = (_Bool)1;
int var_15 = -271073629;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
