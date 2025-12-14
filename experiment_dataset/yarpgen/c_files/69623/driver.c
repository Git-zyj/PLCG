#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)100;
int var_3 = -858527195;
unsigned int var_5 = 1114771931U;
signed char var_7 = (signed char)-124;
unsigned char var_8 = (unsigned char)154;
signed char var_9 = (signed char)-55;
unsigned char var_12 = (unsigned char)234;
unsigned long long int var_15 = 8138028184061325751ULL;
int zero = 0;
unsigned long long int var_16 = 9940845446460014537ULL;
short var_17 = (short)-16993;
int var_18 = -874202857;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
