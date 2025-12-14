#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)214;
signed char var_2 = (signed char)-23;
unsigned int var_3 = 57617007U;
short var_5 = (short)-3201;
signed char var_15 = (signed char)106;
short var_18 = (short)-25335;
unsigned int var_19 = 2443084658U;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-71;
int var_22 = 1955827252;
unsigned char var_23 = (unsigned char)126;
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
