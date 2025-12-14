#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5219045753661621466LL;
unsigned short var_3 = (unsigned short)50996;
unsigned char var_6 = (unsigned char)177;
unsigned int var_7 = 3377771448U;
long long int var_11 = 1810984683111243110LL;
unsigned long long int var_12 = 13031077426445013442ULL;
long long int var_13 = -2164374621119911013LL;
short var_15 = (short)-644;
short var_17 = (short)31285;
int zero = 0;
int var_18 = -621127500;
int var_19 = 640752126;
long long int var_20 = -6607244236534439814LL;
short var_21 = (short)23029;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
