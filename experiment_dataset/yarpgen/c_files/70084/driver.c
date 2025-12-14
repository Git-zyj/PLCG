#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-72;
unsigned long long int var_9 = 11870894243566250639ULL;
unsigned long long int var_10 = 6995880384308922391ULL;
int var_12 = 1005147016;
unsigned long long int var_14 = 16274881929004082181ULL;
int zero = 0;
unsigned long long int var_19 = 5864610773439230253ULL;
long long int var_20 = -6601518721286848726LL;
signed char var_21 = (signed char)-37;
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
