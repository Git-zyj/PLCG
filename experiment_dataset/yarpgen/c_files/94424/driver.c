#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12909788552614545990ULL;
_Bool var_2 = (_Bool)1;
long long int var_3 = -8567503753485829513LL;
signed char var_5 = (signed char)-46;
short var_7 = (short)-31540;
short var_8 = (short)-12111;
unsigned char var_10 = (unsigned char)50;
int zero = 0;
unsigned long long int var_13 = 7251758194553014952ULL;
short var_14 = (short)-27989;
void init() {
}

void checksum() {
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
