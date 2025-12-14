#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50818;
unsigned char var_6 = (unsigned char)123;
unsigned long long int var_11 = 1728238990635889204ULL;
unsigned long long int var_12 = 16549177427852879698ULL;
unsigned short var_16 = (unsigned short)14259;
int zero = 0;
signed char var_17 = (signed char)-111;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
