#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3241359954788509594LL;
short var_2 = (short)-2449;
unsigned long long int var_3 = 14969292286072121087ULL;
short var_4 = (short)28809;
long long int var_5 = -2957094366636629788LL;
signed char var_7 = (signed char)105;
long long int var_8 = -2325877423812439218LL;
unsigned long long int var_9 = 13642602936977567176ULL;
long long int var_11 = 1721855069070219621LL;
unsigned int var_12 = 586738499U;
int zero = 0;
signed char var_14 = (signed char)-28;
short var_15 = (short)-13272;
unsigned long long int var_16 = 3571564384414004452ULL;
long long int var_17 = -4478656513517300696LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
