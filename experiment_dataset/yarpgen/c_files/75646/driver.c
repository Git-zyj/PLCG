#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)47;
unsigned short var_2 = (unsigned short)43223;
signed char var_3 = (signed char)65;
unsigned long long int var_5 = 13267428823357848706ULL;
signed char var_7 = (signed char)-27;
unsigned char var_11 = (unsigned char)172;
long long int var_12 = 9139857948544277015LL;
int zero = 0;
signed char var_13 = (signed char)-107;
signed char var_14 = (signed char)78;
unsigned char var_15 = (unsigned char)217;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
