#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-72;
unsigned char var_2 = (unsigned char)126;
unsigned char var_3 = (unsigned char)245;
unsigned short var_7 = (unsigned short)51298;
unsigned int var_9 = 1924223911U;
int zero = 0;
long long int var_11 = 7210999852639804602LL;
unsigned long long int var_12 = 12490379026293178054ULL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
