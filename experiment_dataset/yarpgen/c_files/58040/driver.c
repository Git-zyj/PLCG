#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-12;
long long int var_3 = 5164536038916177877LL;
unsigned long long int var_4 = 5905749003091195461ULL;
unsigned int var_9 = 2115310641U;
int var_10 = -1881072122;
signed char var_11 = (signed char)-2;
unsigned int var_12 = 2988425856U;
short var_14 = (short)5482;
unsigned char var_16 = (unsigned char)58;
int zero = 0;
short var_19 = (short)-7112;
short var_20 = (short)-6375;
unsigned char var_21 = (unsigned char)251;
short var_22 = (short)22914;
unsigned short var_23 = (unsigned short)23711;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
