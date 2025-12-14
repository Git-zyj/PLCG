#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3223663336U;
signed char var_3 = (signed char)-84;
_Bool var_4 = (_Bool)0;
short var_7 = (short)18343;
unsigned short var_9 = (unsigned short)11670;
int zero = 0;
unsigned char var_13 = (unsigned char)144;
int var_14 = 1495613112;
void init() {
}

void checksum() {
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
