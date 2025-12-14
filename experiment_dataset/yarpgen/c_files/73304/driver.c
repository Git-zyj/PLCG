#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15734865867140888622ULL;
unsigned int var_4 = 3116537428U;
unsigned int var_6 = 3541330737U;
short var_7 = (short)2513;
unsigned short var_9 = (unsigned short)15929;
unsigned long long int var_10 = 12548683842317560953ULL;
int zero = 0;
unsigned long long int var_11 = 7358612690507604595ULL;
unsigned long long int var_12 = 12233311972073441968ULL;
unsigned long long int var_13 = 6436643516688044289ULL;
unsigned short var_14 = (unsigned short)65100;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
