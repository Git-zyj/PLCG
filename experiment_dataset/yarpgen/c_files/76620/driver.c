#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32194;
int var_3 = -867630270;
unsigned char var_5 = (unsigned char)213;
int var_8 = 1091489759;
int var_9 = -1278708233;
long long int var_14 = 3922214706678068326LL;
short var_15 = (short)-15525;
int zero = 0;
int var_19 = -1341811248;
unsigned int var_20 = 907485535U;
unsigned int var_21 = 109596697U;
unsigned char var_22 = (unsigned char)61;
void init() {
}

void checksum() {
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
