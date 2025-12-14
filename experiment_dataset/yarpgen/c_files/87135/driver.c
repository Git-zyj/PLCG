#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 4107885323U;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)5;
unsigned short var_9 = (unsigned short)35824;
long long int var_10 = 8201759356825572515LL;
unsigned long long int var_11 = 14827547844800181214ULL;
unsigned short var_18 = (unsigned short)55070;
long long int var_19 = 2393466334489350568LL;
int zero = 0;
int var_20 = 1220616399;
signed char var_21 = (signed char)-113;
long long int var_22 = 4750027230049322198LL;
void init() {
}

void checksum() {
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
