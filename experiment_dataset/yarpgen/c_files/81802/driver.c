#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -171296044;
unsigned long long int var_2 = 15923396946397864860ULL;
_Bool var_4 = (_Bool)0;
short var_6 = (short)5627;
int var_9 = -2065351554;
int zero = 0;
signed char var_11 = (signed char)-118;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)54;
unsigned short var_14 = (unsigned short)23508;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
