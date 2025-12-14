#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-2;
unsigned char var_4 = (unsigned char)70;
long long int var_6 = 1360212863139016454LL;
unsigned char var_7 = (unsigned char)173;
unsigned int var_8 = 1809410735U;
signed char var_9 = (signed char)33;
short var_11 = (short)6194;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_16 = -6878055550640276318LL;
int var_17 = -1653233669;
void init() {
}

void checksum() {
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
