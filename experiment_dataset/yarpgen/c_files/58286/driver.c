#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)216;
unsigned char var_6 = (unsigned char)29;
short var_8 = (short)32652;
unsigned char var_9 = (unsigned char)105;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)-59;
unsigned char var_18 = (unsigned char)169;
int var_19 = -1247279562;
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
