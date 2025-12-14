#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1107889672;
unsigned long long int var_1 = 7836356149338600218ULL;
unsigned short var_4 = (unsigned short)6631;
unsigned long long int var_5 = 13645428164734246384ULL;
signed char var_7 = (signed char)36;
int var_8 = -169538636;
signed char var_9 = (signed char)-95;
int zero = 0;
unsigned char var_13 = (unsigned char)9;
unsigned char var_14 = (unsigned char)162;
short var_15 = (short)-27722;
long long int var_16 = 8538239330550048374LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
