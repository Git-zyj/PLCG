#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30069;
unsigned long long int var_1 = 4755054006951594589ULL;
short var_4 = (short)-4962;
unsigned long long int var_6 = 8757396723382387912ULL;
long long int var_7 = 8634020693625481470LL;
signed char var_9 = (signed char)-126;
signed char var_12 = (signed char)-62;
int zero = 0;
unsigned char var_13 = (unsigned char)207;
unsigned long long int var_14 = 6786611354114924201ULL;
signed char var_15 = (signed char)99;
int var_16 = -356795719;
unsigned long long int var_17 = 3887622233278349955ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
