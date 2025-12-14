#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)170;
signed char var_1 = (signed char)-103;
signed char var_2 = (signed char)-86;
unsigned short var_6 = (unsigned short)58899;
signed char var_8 = (signed char)110;
signed char var_11 = (signed char)45;
signed char var_14 = (signed char)108;
signed char var_16 = (signed char)-72;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)-96;
_Bool var_21 = (_Bool)0;
int var_22 = -743424752;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
