#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)46318;
unsigned int var_9 = 4017781191U;
unsigned long long int var_13 = 6517427639472523821ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)3482;
int var_17 = 840021775;
long long int var_18 = -913482637150182835LL;
unsigned int var_19 = 2876629361U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
