#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-112;
long long int var_1 = -6843096459428046180LL;
int var_7 = -1455096078;
unsigned long long int var_8 = 2271842660749302125ULL;
unsigned char var_10 = (unsigned char)127;
int zero = 0;
unsigned short var_11 = (unsigned short)24208;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)106;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
