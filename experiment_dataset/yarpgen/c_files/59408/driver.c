#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1732398611U;
unsigned long long int var_2 = 11211461999328068791ULL;
_Bool var_3 = (_Bool)1;
signed char var_6 = (signed char)12;
unsigned long long int var_8 = 4494915075874933915ULL;
long long int var_9 = -1571415519214455875LL;
unsigned long long int var_10 = 9554779086716883147ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = 7654650829163410116LL;
void init() {
}

void checksum() {
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
