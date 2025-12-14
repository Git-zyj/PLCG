#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5116402340716187440LL;
unsigned char var_3 = (unsigned char)137;
unsigned char var_9 = (unsigned char)161;
unsigned char var_11 = (unsigned char)209;
_Bool var_13 = (_Bool)0;
unsigned char var_15 = (unsigned char)174;
unsigned char var_16 = (unsigned char)3;
int zero = 0;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
long long int var_19 = 3484938772363156705LL;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
