#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)81;
unsigned long long int var_1 = 12552009105080619076ULL;
short var_2 = (short)281;
long long int var_5 = 3419982154764860142LL;
int var_7 = 1970189853;
unsigned int var_8 = 226585771U;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)85;
int zero = 0;
unsigned char var_11 = (unsigned char)68;
signed char var_12 = (signed char)-13;
_Bool var_13 = (_Bool)1;
long long int var_14 = 8031723476245768584LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
