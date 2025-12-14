#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)88;
unsigned char var_7 = (unsigned char)184;
unsigned long long int var_9 = 12156959815377726242ULL;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)62;
unsigned char var_12 = (unsigned char)109;
unsigned short var_13 = (unsigned short)40804;
int zero = 0;
short var_14 = (short)-27989;
unsigned char var_15 = (unsigned char)181;
unsigned int var_16 = 2409876436U;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
