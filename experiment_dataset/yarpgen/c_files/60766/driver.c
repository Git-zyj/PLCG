#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60190;
short var_1 = (short)-15140;
long long int var_3 = 9190785519617880944LL;
short var_5 = (short)265;
long long int var_6 = 7667646666222850474LL;
short var_8 = (short)-26630;
long long int var_9 = -6289721240339701278LL;
int zero = 0;
int var_12 = 434698044;
short var_13 = (short)-23576;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
