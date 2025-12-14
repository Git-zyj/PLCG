#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)9301;
unsigned int var_2 = 531685334U;
long long int var_4 = 3520859611175574778LL;
long long int var_6 = -1065218485600887815LL;
unsigned short var_7 = (unsigned short)48295;
int zero = 0;
long long int var_10 = -1283206915426144819LL;
unsigned int var_11 = 2493478583U;
unsigned int var_12 = 1257267680U;
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
