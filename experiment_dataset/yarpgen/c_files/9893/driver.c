#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)15082;
_Bool var_5 = (_Bool)0;
unsigned long long int var_8 = 17057458326262746245ULL;
short var_9 = (short)-27622;
unsigned int var_10 = 1511733471U;
int var_13 = 1460429314;
short var_14 = (short)3622;
unsigned char var_18 = (unsigned char)144;
int zero = 0;
long long int var_19 = -6572931839328630047LL;
unsigned char var_20 = (unsigned char)231;
int var_21 = 1015066676;
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
