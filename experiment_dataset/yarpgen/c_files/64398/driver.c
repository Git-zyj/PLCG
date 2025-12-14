#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 12627262844418593648ULL;
unsigned int var_7 = 1582004500U;
unsigned char var_10 = (unsigned char)22;
unsigned short var_11 = (unsigned short)11572;
int var_13 = -323768735;
signed char var_15 = (signed char)101;
int zero = 0;
unsigned long long int var_16 = 4337419903039230123ULL;
unsigned int var_17 = 3969442659U;
unsigned short var_18 = (unsigned short)15231;
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
