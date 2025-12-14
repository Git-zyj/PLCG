#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 8534677561844839099ULL;
long long int var_8 = -4872198019195355070LL;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)247;
int zero = 0;
unsigned char var_12 = (unsigned char)21;
long long int var_13 = 5174841235543144531LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
