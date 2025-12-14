#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17671837382055109595ULL;
unsigned char var_2 = (unsigned char)15;
short var_3 = (short)-27601;
int var_5 = 1257377557;
short var_7 = (short)31268;
int var_8 = -979008087;
signed char var_9 = (signed char)105;
short var_12 = (short)-14450;
int var_13 = 1534417144;
unsigned char var_14 = (unsigned char)56;
signed char var_15 = (signed char)-16;
short var_17 = (short)7261;
int zero = 0;
int var_18 = -1543612243;
signed char var_19 = (signed char)44;
unsigned char var_20 = (unsigned char)161;
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
