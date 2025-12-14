#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)142;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned short var_9 = (unsigned short)57635;
unsigned short var_10 = (unsigned short)29015;
int zero = 0;
signed char var_13 = (signed char)121;
unsigned char var_14 = (unsigned char)88;
void init() {
}

void checksum() {
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
