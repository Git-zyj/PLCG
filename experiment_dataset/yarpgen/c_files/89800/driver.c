#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)10;
unsigned char var_3 = (unsigned char)217;
long long int var_4 = 8017337569391613830LL;
signed char var_6 = (signed char)-110;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-7833;
signed char var_14 = (signed char)77;
short var_15 = (short)9894;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
