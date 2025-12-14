#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8943570332233778655LL;
unsigned char var_2 = (unsigned char)80;
unsigned int var_4 = 982959772U;
long long int var_5 = -6343543614592074214LL;
unsigned char var_7 = (unsigned char)11;
short var_9 = (short)-31471;
int zero = 0;
signed char var_10 = (signed char)69;
unsigned char var_11 = (unsigned char)146;
int var_12 = -1334415763;
unsigned short var_13 = (unsigned short)14411;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
