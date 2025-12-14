#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -2209846576227447666LL;
long long int var_8 = -5787108600085352267LL;
signed char var_9 = (signed char)59;
unsigned int var_12 = 385338080U;
unsigned char var_14 = (unsigned char)46;
signed char var_15 = (signed char)-121;
int zero = 0;
signed char var_18 = (signed char)78;
unsigned char var_19 = (unsigned char)163;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
