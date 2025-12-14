#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3770839500073776276LL;
unsigned int var_8 = 297920333U;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-5031;
short var_18 = (short)-30512;
int zero = 0;
short var_19 = (short)19323;
long long int var_20 = 8035631438058432572LL;
short var_21 = (short)-30259;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
