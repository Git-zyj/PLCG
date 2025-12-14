#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32157;
unsigned int var_1 = 3767320036U;
signed char var_4 = (signed char)122;
unsigned short var_5 = (unsigned short)98;
signed char var_6 = (signed char)39;
short var_10 = (short)23596;
unsigned long long int var_14 = 4409952102945847337ULL;
signed char var_15 = (signed char)45;
long long int var_16 = -437329012889886889LL;
int zero = 0;
signed char var_19 = (signed char)89;
signed char var_20 = (signed char)-77;
unsigned int var_21 = 4054531201U;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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
