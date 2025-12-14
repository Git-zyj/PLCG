#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8187;
unsigned short var_3 = (unsigned short)13332;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)1;
int zero = 0;
long long int var_15 = 2617890990232786206LL;
_Bool var_16 = (_Bool)1;
short var_17 = (short)15576;
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
