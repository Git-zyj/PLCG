#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)11;
long long int var_7 = -7113451395768454491LL;
unsigned int var_14 = 1679796548U;
short var_17 = (short)-25140;
int zero = 0;
long long int var_18 = -1240176439783517583LL;
unsigned short var_19 = (unsigned short)47916;
unsigned short var_20 = (unsigned short)28955;
long long int var_21 = 2574177778737746008LL;
long long int var_22 = -306860278860959143LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
