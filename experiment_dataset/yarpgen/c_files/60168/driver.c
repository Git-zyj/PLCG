#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2381983907913292792LL;
int var_2 = -188198049;
unsigned long long int var_3 = 978944778733743311ULL;
short var_4 = (short)8529;
unsigned char var_5 = (unsigned char)46;
signed char var_7 = (signed char)-57;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)11556;
signed char var_13 = (signed char)-72;
int zero = 0;
signed char var_15 = (signed char)-102;
signed char var_16 = (signed char)73;
short var_17 = (short)-18203;
unsigned long long int var_18 = 17754519054874944995ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
