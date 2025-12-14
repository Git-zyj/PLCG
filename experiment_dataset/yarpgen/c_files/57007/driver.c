#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)136;
unsigned short var_4 = (unsigned short)14181;
long long int var_6 = 5019780040054243265LL;
unsigned int var_7 = 1952841454U;
unsigned char var_11 = (unsigned char)71;
signed char var_12 = (signed char)-27;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_18 = (short)-474;
long long int var_19 = 7762877457138682164LL;
signed char var_20 = (signed char)-43;
unsigned int var_21 = 2558385181U;
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
