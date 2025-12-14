#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 8243015177929138116ULL;
signed char var_9 = (signed char)-121;
short var_12 = (short)562;
int var_13 = 1555662241;
unsigned short var_16 = (unsigned short)16954;
int zero = 0;
unsigned short var_18 = (unsigned short)62659;
signed char var_19 = (signed char)-43;
unsigned short var_20 = (unsigned short)21410;
unsigned int var_21 = 1742441631U;
int var_22 = 294205059;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
