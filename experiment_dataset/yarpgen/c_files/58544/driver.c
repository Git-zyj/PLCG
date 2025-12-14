#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10417;
int var_1 = 513942469;
short var_7 = (short)-12910;
_Bool var_9 = (_Bool)1;
short var_13 = (short)31229;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)44311;
int zero = 0;
unsigned short var_19 = (unsigned short)58615;
_Bool var_20 = (_Bool)1;
long long int var_21 = -7092029657080991158LL;
_Bool var_22 = (_Bool)0;
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
