#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14622;
long long int var_4 = 8450316856243562968LL;
unsigned char var_5 = (unsigned char)208;
long long int var_9 = -7275285372957763530LL;
unsigned int var_10 = 2813542228U;
int var_11 = -1117439983;
long long int var_14 = -742985489975021280LL;
unsigned char var_15 = (unsigned char)146;
unsigned short var_17 = (unsigned short)60624;
int zero = 0;
short var_18 = (short)21776;
unsigned int var_19 = 977051282U;
_Bool var_20 = (_Bool)1;
int var_21 = 988555375;
signed char var_22 = (signed char)-99;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
