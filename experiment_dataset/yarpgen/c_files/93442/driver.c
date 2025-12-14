#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)77;
signed char var_1 = (signed char)-11;
unsigned char var_2 = (unsigned char)32;
unsigned long long int var_6 = 9205800814895217195ULL;
int var_7 = 735486241;
unsigned short var_8 = (unsigned short)9084;
unsigned char var_9 = (unsigned char)238;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_20 = 670803460;
long long int var_21 = -7604739919296555708LL;
_Bool var_22 = (_Bool)0;
long long int var_23 = -4520317638499050470LL;
_Bool var_24 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
