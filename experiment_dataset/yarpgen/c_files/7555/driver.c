#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5031013665955926654ULL;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)48;
unsigned short var_6 = (unsigned short)10220;
_Bool var_7 = (_Bool)1;
unsigned int var_11 = 611958637U;
unsigned long long int var_12 = 6595062438660557452ULL;
signed char var_16 = (signed char)40;
int zero = 0;
short var_18 = (short)-6964;
signed char var_19 = (signed char)119;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
