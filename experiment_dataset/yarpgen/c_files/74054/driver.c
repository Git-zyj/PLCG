#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 71208800;
unsigned long long int var_2 = 967272739997859714ULL;
unsigned long long int var_4 = 14593603580691500435ULL;
unsigned char var_5 = (unsigned char)90;
int var_6 = -1760282774;
unsigned short var_7 = (unsigned short)48313;
unsigned char var_8 = (unsigned char)44;
long long int var_9 = -9112535051839787624LL;
int zero = 0;
signed char var_11 = (signed char)-107;
short var_12 = (short)-9796;
unsigned char var_13 = (unsigned char)245;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
