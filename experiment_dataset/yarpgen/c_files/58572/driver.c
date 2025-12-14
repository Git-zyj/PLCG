#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50350;
unsigned char var_1 = (unsigned char)56;
unsigned int var_3 = 2380477724U;
_Bool var_5 = (_Bool)0;
int var_8 = 1264574589;
unsigned char var_9 = (unsigned char)58;
int zero = 0;
unsigned short var_13 = (unsigned short)7239;
int var_14 = -39695828;
unsigned long long int var_15 = 937115833147705584ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
