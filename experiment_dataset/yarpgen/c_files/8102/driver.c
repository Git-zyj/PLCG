#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-120;
signed char var_3 = (signed char)101;
unsigned char var_5 = (unsigned char)168;
signed char var_6 = (signed char)107;
signed char var_7 = (signed char)103;
unsigned long long int var_8 = 1682631950789099568ULL;
unsigned char var_10 = (unsigned char)5;
unsigned char var_13 = (unsigned char)249;
unsigned long long int var_18 = 3540570703582384140ULL;
int var_19 = 1112396622;
int zero = 0;
signed char var_20 = (signed char)-33;
signed char var_21 = (signed char)13;
long long int var_22 = -371281346630969402LL;
unsigned char var_23 = (unsigned char)188;
void init() {
}

void checksum() {
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
