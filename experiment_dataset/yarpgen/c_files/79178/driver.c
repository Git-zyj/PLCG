#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6478639311030001180LL;
_Bool var_2 = (_Bool)0;
short var_3 = (short)10121;
unsigned char var_7 = (unsigned char)190;
int var_9 = 953421591;
unsigned char var_11 = (unsigned char)18;
unsigned int var_12 = 210687362U;
unsigned char var_13 = (unsigned char)251;
long long int var_14 = -6135624200324272449LL;
unsigned short var_17 = (unsigned short)33873;
int zero = 0;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
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
