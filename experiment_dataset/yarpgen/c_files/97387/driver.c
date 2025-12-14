#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)107;
signed char var_2 = (signed char)15;
unsigned long long int var_5 = 7776855158839157165ULL;
signed char var_7 = (signed char)-21;
long long int var_9 = 9068491727077044515LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned char var_11 = (unsigned char)98;
int var_12 = -2030121971;
long long int var_13 = 8037968999908954702LL;
unsigned char var_14 = (unsigned char)133;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
