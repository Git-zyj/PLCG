#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 156728659804728245LL;
short var_6 = (short)7637;
signed char var_8 = (signed char)-54;
unsigned short var_10 = (unsigned short)11138;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 866698931U;
signed char var_15 = (signed char)106;
void init() {
}

void checksum() {
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
