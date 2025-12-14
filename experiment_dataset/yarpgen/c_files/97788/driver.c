#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)10;
unsigned long long int var_3 = 6398936467363079162ULL;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)119;
signed char var_11 = (signed char)-28;
long long int var_12 = 6833154589948103344LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 17125709970063615978ULL;
unsigned long long int var_15 = 9605274799592230656ULL;
signed char var_16 = (signed char)104;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
