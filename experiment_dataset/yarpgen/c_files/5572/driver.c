#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)18;
short var_3 = (short)-27439;
unsigned char var_4 = (unsigned char)87;
unsigned short var_5 = (unsigned short)41167;
long long int var_6 = 6978361638029108347LL;
unsigned char var_7 = (unsigned char)37;
short var_8 = (short)-19693;
int zero = 0;
long long int var_11 = -8447421238996876525LL;
unsigned int var_12 = 829787789U;
unsigned int var_13 = 1344525033U;
unsigned long long int var_14 = 7535095463895225163ULL;
short var_15 = (short)-11081;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
