#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -578751305;
_Bool var_3 = (_Bool)0;
long long int var_4 = -7236065650818057156LL;
short var_5 = (short)11885;
long long int var_7 = -4662776083982610209LL;
long long int var_8 = -5458208323762569306LL;
int zero = 0;
int var_11 = -1516418485;
long long int var_12 = -3981472032024313987LL;
unsigned short var_13 = (unsigned short)22946;
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
