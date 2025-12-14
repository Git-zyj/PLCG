#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-118;
signed char var_3 = (signed char)-114;
unsigned char var_4 = (unsigned char)199;
long long int var_7 = -6875946116775311957LL;
unsigned long long int var_9 = 18351229522604002379ULL;
unsigned long long int var_10 = 134624635547651208ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)171;
unsigned short var_14 = (unsigned short)13843;
long long int var_15 = 2206741499746097567LL;
void init() {
}

void checksum() {
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
