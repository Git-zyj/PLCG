#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)63;
unsigned short var_2 = (unsigned short)33194;
unsigned short var_6 = (unsigned short)60896;
unsigned short var_7 = (unsigned short)56521;
unsigned int var_9 = 2498020608U;
int zero = 0;
unsigned char var_13 = (unsigned char)121;
int var_14 = -547854612;
long long int var_15 = 7366167615451346842LL;
signed char var_16 = (signed char)53;
unsigned int var_17 = 3834619735U;
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
