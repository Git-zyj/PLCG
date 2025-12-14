#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7148839706174593071ULL;
unsigned long long int var_3 = 6344928168785002419ULL;
int var_6 = 1438534733;
unsigned char var_8 = (unsigned char)226;
_Bool var_12 = (_Bool)0;
unsigned short var_15 = (unsigned short)24120;
int zero = 0;
int var_17 = -913363694;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)9047;
unsigned char var_20 = (unsigned char)51;
unsigned long long int var_21 = 17515931042023353958ULL;
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
