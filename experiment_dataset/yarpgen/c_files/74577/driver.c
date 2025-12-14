#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)64;
short var_4 = (short)-11377;
short var_5 = (short)-1007;
unsigned short var_8 = (unsigned short)53401;
unsigned char var_9 = (unsigned char)190;
unsigned long long int var_10 = 15498903086114948747ULL;
long long int var_11 = -2582128678383764831LL;
int var_16 = 844515118;
unsigned short var_17 = (unsigned short)914;
int zero = 0;
unsigned long long int var_19 = 10125028291867798422ULL;
unsigned int var_20 = 347250511U;
unsigned char var_21 = (unsigned char)138;
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
