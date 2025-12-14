#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18312295252426491175ULL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 17099048378831073751ULL;
unsigned long long int var_8 = 7346603913867160160ULL;
unsigned char var_13 = (unsigned char)239;
unsigned short var_15 = (unsigned short)22295;
int zero = 0;
unsigned short var_19 = (unsigned short)42958;
unsigned long long int var_20 = 4444358624926842162ULL;
unsigned char var_21 = (unsigned char)81;
void init() {
}

void checksum() {
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
