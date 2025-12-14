#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 223400361;
unsigned char var_1 = (unsigned char)93;
unsigned long long int var_4 = 11184784298029764022ULL;
int var_8 = 545164810;
signed char var_11 = (signed char)96;
short var_12 = (short)-15592;
_Bool var_15 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)-102;
unsigned int var_20 = 1058305623U;
int var_21 = 406407494;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
