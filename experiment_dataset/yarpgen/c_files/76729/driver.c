#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2384;
long long int var_1 = 1262807251735160750LL;
int var_2 = -171573781;
int var_3 = 1932512848;
short var_4 = (short)-23099;
int var_5 = -590213933;
int var_6 = -152277963;
int var_8 = 1744800164;
unsigned char var_12 = (unsigned char)173;
unsigned int var_15 = 2091399881U;
int zero = 0;
unsigned char var_17 = (unsigned char)82;
long long int var_18 = 7455601926337639768LL;
unsigned short var_19 = (unsigned short)25609;
unsigned long long int var_20 = 8467049602847127401ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
