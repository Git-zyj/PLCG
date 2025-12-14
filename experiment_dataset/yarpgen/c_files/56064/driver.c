#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27312;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)102;
short var_8 = (short)17509;
long long int var_12 = 7245348359480859590LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_16 = -871047868;
unsigned int var_17 = 4121316164U;
unsigned char var_18 = (unsigned char)194;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
