#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26186;
unsigned long long int var_4 = 2922754544804849233ULL;
unsigned long long int var_5 = 10123566872879348785ULL;
unsigned short var_10 = (unsigned short)22377;
unsigned long long int var_12 = 2804210877463690408ULL;
unsigned short var_14 = (unsigned short)20571;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)21914;
_Bool var_19 = (_Bool)0;
long long int var_20 = 3226529816642177886LL;
unsigned char var_21 = (unsigned char)99;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
