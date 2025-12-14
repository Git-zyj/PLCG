#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8780707226364837131LL;
int var_3 = -1842024047;
signed char var_4 = (signed char)-59;
unsigned char var_7 = (unsigned char)4;
unsigned char var_9 = (unsigned char)157;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_15 = (unsigned char)97;
unsigned int var_16 = 3970605207U;
unsigned long long int var_17 = 3779521091264591122ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
