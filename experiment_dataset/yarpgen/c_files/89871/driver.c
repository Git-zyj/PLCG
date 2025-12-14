#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)56389;
signed char var_5 = (signed char)-120;
short var_8 = (short)20418;
_Bool var_13 = (_Bool)0;
signed char var_15 = (signed char)-28;
int zero = 0;
unsigned char var_18 = (unsigned char)126;
int var_19 = -293347166;
unsigned short var_20 = (unsigned short)29151;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
