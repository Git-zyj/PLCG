#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3181618180U;
signed char var_4 = (signed char)69;
signed char var_5 = (signed char)-102;
unsigned long long int var_6 = 7421692787044619059ULL;
unsigned long long int var_14 = 2027572549148297416ULL;
unsigned long long int var_15 = 752405277558489885ULL;
int zero = 0;
signed char var_20 = (signed char)76;
unsigned long long int var_21 = 3894860357964243520ULL;
unsigned char var_22 = (unsigned char)243;
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
