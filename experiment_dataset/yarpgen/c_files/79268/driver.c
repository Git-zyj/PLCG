#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = 3929351608220882672LL;
long long int var_13 = -2938477464381670340LL;
int zero = 0;
unsigned char var_19 = (unsigned char)15;
int var_20 = -577807605;
_Bool var_21 = (_Bool)1;
long long int var_22 = -4873176118097932568LL;
short var_23 = (short)1988;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
