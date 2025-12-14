#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-27;
signed char var_8 = (signed char)101;
_Bool var_10 = (_Bool)1;
unsigned long long int var_15 = 14962541186968563965ULL;
unsigned long long int var_18 = 17801914221405125645ULL;
int zero = 0;
unsigned int var_20 = 2939849074U;
unsigned short var_21 = (unsigned short)31457;
unsigned long long int var_22 = 15723263972575634115ULL;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
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
