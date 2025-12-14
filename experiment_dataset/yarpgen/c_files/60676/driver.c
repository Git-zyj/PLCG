#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 176438261;
long long int var_2 = -754235111319668250LL;
unsigned short var_4 = (unsigned short)3888;
unsigned long long int var_7 = 10963390854840939964ULL;
unsigned long long int var_8 = 3906316330898106500ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 16975778128835733647ULL;
signed char var_11 = (signed char)-104;
unsigned int var_12 = 293494247U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
