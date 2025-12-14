#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8904084143042028343LL;
signed char var_1 = (signed char)-109;
long long int var_3 = -2016150754449508266LL;
unsigned short var_6 = (unsigned short)53265;
signed char var_7 = (signed char)70;
signed char var_10 = (signed char)-40;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)63484;
long long int var_15 = -8256269245390125257LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
