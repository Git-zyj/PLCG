#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7878499982706665254LL;
signed char var_3 = (signed char)44;
signed char var_6 = (signed char)60;
unsigned long long int var_7 = 16511647812085592778ULL;
unsigned int var_11 = 3882610605U;
unsigned int var_12 = 2534159589U;
unsigned char var_17 = (unsigned char)148;
int var_19 = 226331612;
int zero = 0;
short var_20 = (short)-15578;
unsigned char var_21 = (unsigned char)6;
unsigned short var_22 = (unsigned short)57977;
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
