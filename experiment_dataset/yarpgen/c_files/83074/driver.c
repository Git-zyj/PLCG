#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)4;
long long int var_4 = -5678787474746034922LL;
unsigned short var_7 = (unsigned short)14375;
unsigned long long int var_9 = 2915689440476460441ULL;
int zero = 0;
signed char var_10 = (signed char)-62;
unsigned char var_11 = (unsigned char)65;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
