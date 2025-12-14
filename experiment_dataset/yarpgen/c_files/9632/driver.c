#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3494882873367876762LL;
unsigned char var_3 = (unsigned char)199;
_Bool var_4 = (_Bool)1;
short var_6 = (short)29671;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)28302;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)115;
_Bool var_11 = (_Bool)1;
short var_12 = (short)6591;
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
