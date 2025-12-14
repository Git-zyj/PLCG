#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3170772522574100129ULL;
long long int var_1 = 7873904696164666472LL;
unsigned short var_2 = (unsigned short)63473;
unsigned char var_3 = (unsigned char)237;
int var_4 = 101210670;
unsigned short var_5 = (unsigned short)27116;
unsigned char var_6 = (unsigned char)43;
unsigned int var_7 = 2989511815U;
int var_8 = -1371928247;
unsigned short var_9 = (unsigned short)48038;
int zero = 0;
signed char var_10 = (signed char)-35;
_Bool var_11 = (_Bool)1;
long long int var_12 = 7834739218750141286LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
