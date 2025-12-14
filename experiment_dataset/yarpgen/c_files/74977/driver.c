#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_2 = (unsigned short)20800;
unsigned int var_3 = 2095193383U;
unsigned long long int var_4 = 10641103269535268391ULL;
int var_7 = -1349805701;
short var_8 = (short)-15439;
unsigned int var_9 = 766612753U;
unsigned long long int var_10 = 9270743130962330728ULL;
int zero = 0;
signed char var_11 = (signed char)-64;
short var_12 = (short)-16809;
unsigned int var_13 = 1225867690U;
short var_14 = (short)15441;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
