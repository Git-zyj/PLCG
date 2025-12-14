#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7118929242952385922LL;
unsigned int var_8 = 1189933709U;
unsigned int var_15 = 2604982020U;
signed char var_16 = (signed char)-40;
int zero = 0;
signed char var_19 = (signed char)80;
unsigned short var_20 = (unsigned short)17225;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
