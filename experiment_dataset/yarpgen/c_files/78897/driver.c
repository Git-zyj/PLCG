#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3958847264123866994ULL;
signed char var_1 = (signed char)119;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 10966364878218974746ULL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_8 = 2969111338001686384ULL;
short var_9 = (short)31352;
int var_10 = 473989396;
int zero = 0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-27115;
void init() {
}

void checksum() {
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
