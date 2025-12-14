#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1463920870U;
unsigned int var_2 = 2390920988U;
unsigned char var_5 = (unsigned char)111;
unsigned long long int var_7 = 10867384285032675864ULL;
short var_12 = (short)-25776;
unsigned short var_13 = (unsigned short)60616;
int var_14 = -397104308;
unsigned int var_15 = 1304178545U;
int zero = 0;
unsigned short var_17 = (unsigned short)14062;
short var_18 = (short)-7170;
unsigned long long int var_19 = 17677310463635174230ULL;
signed char var_20 = (signed char)81;
unsigned long long int var_21 = 4812787595643899166ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
