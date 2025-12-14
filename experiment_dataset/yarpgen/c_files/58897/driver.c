#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)214;
unsigned short var_2 = (unsigned short)58950;
long long int var_5 = 493394154309132277LL;
_Bool var_6 = (_Bool)0;
long long int var_7 = -1871237608934187544LL;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)57611;
unsigned short var_10 = (unsigned short)32936;
int zero = 0;
int var_12 = -240600457;
unsigned short var_13 = (unsigned short)862;
unsigned short var_14 = (unsigned short)3035;
unsigned short var_15 = (unsigned short)18116;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
