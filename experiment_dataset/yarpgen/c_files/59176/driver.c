#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 803706247U;
unsigned long long int var_1 = 8357533795647463649ULL;
unsigned int var_2 = 2311052608U;
unsigned int var_4 = 3083854766U;
_Bool var_5 = (_Bool)0;
signed char var_8 = (signed char)4;
unsigned short var_12 = (unsigned short)41728;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)36096;
long long int var_15 = 1059368098579357221LL;
unsigned int var_16 = 2609557112U;
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
