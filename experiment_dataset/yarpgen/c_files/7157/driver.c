#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10927;
long long int var_1 = -5709973716869361949LL;
_Bool var_3 = (_Bool)0;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)251;
unsigned char var_13 = (unsigned char)36;
unsigned short var_14 = (unsigned short)30297;
int zero = 0;
int var_19 = -1943165462;
long long int var_20 = -6154990097343196713LL;
long long int var_21 = 1910147181203660939LL;
int var_22 = -1960672379;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
