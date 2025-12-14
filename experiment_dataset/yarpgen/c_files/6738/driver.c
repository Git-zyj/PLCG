#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1088606783U;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)195;
unsigned int var_5 = 1827908470U;
_Bool var_13 = (_Bool)0;
unsigned short var_16 = (unsigned short)48312;
int zero = 0;
unsigned int var_19 = 3458869007U;
long long int var_20 = -2068973150900073659LL;
unsigned char var_21 = (unsigned char)80;
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
