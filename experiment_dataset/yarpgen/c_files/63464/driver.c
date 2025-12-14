#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16118629218465235748ULL;
unsigned char var_1 = (unsigned char)131;
unsigned int var_2 = 291852145U;
unsigned long long int var_3 = 10408637245730770056ULL;
unsigned short var_5 = (unsigned short)42751;
long long int var_6 = -6901495889726700330LL;
unsigned int var_8 = 232974836U;
unsigned long long int var_9 = 8041638869235068150ULL;
unsigned int var_10 = 4233513345U;
int zero = 0;
unsigned int var_11 = 1803829692U;
unsigned short var_12 = (unsigned short)58307;
unsigned int var_13 = 239622693U;
_Bool var_14 = (_Bool)0;
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
