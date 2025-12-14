#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)18;
long long int var_3 = 4987680547604240478LL;
signed char var_5 = (signed char)83;
unsigned long long int var_6 = 5547759883687627688ULL;
unsigned int var_10 = 4016467883U;
signed char var_13 = (signed char)44;
unsigned short var_14 = (unsigned short)52963;
int zero = 0;
unsigned long long int var_17 = 5599568636846492588ULL;
long long int var_18 = -8163581217166744161LL;
unsigned long long int var_19 = 9571100898222379789ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
