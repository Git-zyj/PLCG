#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40640;
signed char var_4 = (signed char)-25;
unsigned char var_5 = (unsigned char)242;
short var_6 = (short)-5321;
short var_7 = (short)3832;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 335632451U;
int zero = 0;
int var_10 = -6013771;
unsigned short var_11 = (unsigned short)14052;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
