#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24236;
signed char var_2 = (signed char)116;
unsigned char var_3 = (unsigned char)73;
unsigned long long int var_8 = 2719072458647101669ULL;
unsigned short var_9 = (unsigned short)17532;
unsigned short var_12 = (unsigned short)53006;
int zero = 0;
int var_17 = 2098152985;
unsigned long long int var_18 = 1236161719622193422ULL;
unsigned short var_19 = (unsigned short)26540;
signed char var_20 = (signed char)-86;
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
