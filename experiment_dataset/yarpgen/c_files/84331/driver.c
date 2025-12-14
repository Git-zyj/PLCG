#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5219126138683764786LL;
unsigned short var_1 = (unsigned short)45823;
int var_3 = -1752631085;
unsigned char var_8 = (unsigned char)195;
unsigned char var_9 = (unsigned char)193;
int zero = 0;
unsigned char var_10 = (unsigned char)166;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)20046;
signed char var_13 = (signed char)-106;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
