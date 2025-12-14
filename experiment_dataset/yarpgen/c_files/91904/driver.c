#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -742635872;
int var_6 = 711402163;
unsigned short var_10 = (unsigned short)36523;
unsigned int var_11 = 327517812U;
unsigned int var_15 = 3631228139U;
int zero = 0;
unsigned short var_18 = (unsigned short)15892;
int var_19 = -1215891756;
unsigned int var_20 = 3537098307U;
int var_21 = -511982951;
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
