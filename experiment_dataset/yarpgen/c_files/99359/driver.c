#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)133;
unsigned long long int var_4 = 11699425378798697708ULL;
int var_7 = 686319865;
unsigned int var_9 = 1700123930U;
signed char var_11 = (signed char)30;
unsigned long long int var_12 = 8177813751769421457ULL;
unsigned int var_15 = 3336354631U;
int zero = 0;
long long int var_18 = 5661180886998433094LL;
unsigned int var_19 = 820491128U;
long long int var_20 = 4034230483281936117LL;
signed char var_21 = (signed char)99;
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
