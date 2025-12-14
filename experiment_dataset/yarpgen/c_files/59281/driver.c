#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-127;
long long int var_2 = -3854993261670506108LL;
signed char var_6 = (signed char)-54;
unsigned short var_12 = (unsigned short)55786;
_Bool var_13 = (_Bool)1;
long long int var_15 = -6604751331952361318LL;
unsigned short var_16 = (unsigned short)19160;
int zero = 0;
unsigned int var_17 = 3737364944U;
unsigned int var_18 = 1131504348U;
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
