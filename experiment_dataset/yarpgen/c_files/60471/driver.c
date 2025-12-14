#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-93;
_Bool var_9 = (_Bool)1;
unsigned long long int var_12 = 3374891021506190356ULL;
unsigned char var_13 = (unsigned char)48;
int var_14 = 1425881662;
unsigned int var_16 = 1379593766U;
int zero = 0;
unsigned char var_18 = (unsigned char)116;
unsigned short var_19 = (unsigned short)50706;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
