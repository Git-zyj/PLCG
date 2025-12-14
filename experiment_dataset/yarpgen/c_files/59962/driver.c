#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17131600840688315402ULL;
unsigned long long int var_6 = 8984171622011664351ULL;
unsigned short var_7 = (unsigned short)41259;
int zero = 0;
signed char var_10 = (signed char)-2;
unsigned short var_11 = (unsigned short)64475;
unsigned long long int var_12 = 14631297249568584114ULL;
unsigned char var_13 = (unsigned char)108;
signed char var_14 = (signed char)-94;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
