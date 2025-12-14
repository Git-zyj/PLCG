#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 923837266059062637LL;
short var_4 = (short)-20006;
unsigned int var_5 = 4165006732U;
unsigned int var_7 = 781182131U;
short var_8 = (short)-11821;
unsigned char var_10 = (unsigned char)81;
unsigned int var_14 = 3908938767U;
signed char var_15 = (signed char)-1;
int zero = 0;
int var_19 = -1564933234;
unsigned char var_20 = (unsigned char)116;
_Bool var_21 = (_Bool)0;
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
