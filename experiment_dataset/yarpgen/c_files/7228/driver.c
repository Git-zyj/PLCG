#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-27;
signed char var_2 = (signed char)62;
unsigned int var_4 = 3489712017U;
unsigned int var_5 = 730872304U;
signed char var_6 = (signed char)35;
signed char var_8 = (signed char)79;
unsigned int var_11 = 3976842406U;
unsigned int var_12 = 3424492889U;
signed char var_14 = (signed char)120;
unsigned long long int var_18 = 8624615232988567193ULL;
unsigned int var_19 = 3743139804U;
int zero = 0;
unsigned short var_20 = (unsigned short)6333;
unsigned short var_21 = (unsigned short)11953;
unsigned short var_22 = (unsigned short)35167;
long long int var_23 = -4696129525974892237LL;
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
