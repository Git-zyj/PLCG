#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64391;
long long int var_4 = -7275579428836447664LL;
signed char var_5 = (signed char)-21;
long long int var_8 = -9112074248591363975LL;
_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)1;
long long int var_13 = -7243406611401385617LL;
signed char var_14 = (signed char)-37;
unsigned short var_17 = (unsigned short)55779;
int zero = 0;
signed char var_20 = (signed char)77;
unsigned short var_21 = (unsigned short)60729;
void init() {
}

void checksum() {
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
