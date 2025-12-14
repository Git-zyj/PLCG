#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)125;
_Bool var_8 = (_Bool)0;
short var_11 = (short)-32295;
long long int var_19 = -399420626014237272LL;
int zero = 0;
unsigned int var_20 = 3719554270U;
long long int var_21 = -5233138066345313896LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
