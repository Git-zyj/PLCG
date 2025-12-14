#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3757;
int var_5 = 1153501356;
unsigned char var_8 = (unsigned char)57;
signed char var_18 = (signed char)83;
int zero = 0;
short var_19 = (short)23268;
unsigned int var_20 = 464487669U;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 7556687748256236595ULL;
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
