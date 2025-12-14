#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5735819393847588170LL;
short var_4 = (short)-29536;
unsigned long long int var_7 = 11741993978620516625ULL;
int var_11 = -1362298885;
long long int var_13 = -7563258430318788797LL;
int zero = 0;
int var_14 = -1537570434;
unsigned long long int var_15 = 8297135516228113549ULL;
int var_16 = -1804529750;
int var_17 = -2141289762;
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
