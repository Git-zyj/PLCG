#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16431988818880589529ULL;
unsigned long long int var_3 = 2825900305922613842ULL;
int var_5 = -1004735895;
unsigned long long int var_6 = 9966214002088176732ULL;
unsigned long long int var_7 = 3696717154502123445ULL;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_14 = 5918727431860326ULL;
signed char var_15 = (signed char)-48;
void init() {
}

void checksum() {
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
