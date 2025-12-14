#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)54623;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)39180;
unsigned short var_9 = (unsigned short)30621;
unsigned char var_10 = (unsigned char)78;
_Bool var_12 = (_Bool)0;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned short var_20 = (unsigned short)63397;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)51565;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
