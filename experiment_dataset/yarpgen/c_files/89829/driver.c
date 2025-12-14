#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)57;
unsigned char var_3 = (unsigned char)2;
unsigned int var_4 = 3983698376U;
unsigned char var_5 = (unsigned char)96;
signed char var_6 = (signed char)94;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 2623493508223179355ULL;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)61035;
int zero = 0;
long long int var_11 = -3116684112201610132LL;
int var_12 = 1883030070;
unsigned long long int var_13 = 14954455598839554532ULL;
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
