#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1766420285;
unsigned short var_6 = (unsigned short)18997;
unsigned short var_7 = (unsigned short)45365;
int var_8 = 1841952098;
signed char var_11 = (signed char)106;
long long int var_15 = 5856294626343439597LL;
_Bool var_18 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = -1197664944;
unsigned long long int var_21 = 10333751470592589374ULL;
unsigned int var_22 = 3427617409U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
