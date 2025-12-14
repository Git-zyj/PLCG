#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-2214;
unsigned char var_3 = (unsigned char)82;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)14193;
signed char var_6 = (signed char)-69;
unsigned int var_7 = 2348408636U;
_Bool var_9 = (_Bool)1;
unsigned char var_15 = (unsigned char)249;
int zero = 0;
unsigned long long int var_17 = 10634677888137047938ULL;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-57;
signed char var_20 = (signed char)5;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
