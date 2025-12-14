#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -120452757;
unsigned short var_6 = (unsigned short)20825;
unsigned short var_8 = (unsigned short)42348;
unsigned long long int var_11 = 14607437266304889505ULL;
int zero = 0;
unsigned int var_20 = 1295589771U;
unsigned short var_21 = (unsigned short)17210;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 2709702836465236357ULL;
short var_24 = (short)-30254;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
