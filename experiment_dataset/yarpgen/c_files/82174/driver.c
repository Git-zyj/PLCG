#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1206418531;
int var_4 = 1832286791;
unsigned char var_8 = (unsigned char)254;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-85;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)215;
unsigned short var_19 = (unsigned short)34148;
unsigned long long int var_20 = 2443156341357657370ULL;
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
