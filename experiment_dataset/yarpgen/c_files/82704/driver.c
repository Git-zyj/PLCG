#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7702666922699547118LL;
signed char var_3 = (signed char)121;
signed char var_5 = (signed char)-105;
int var_9 = -138580305;
int zero = 0;
unsigned char var_10 = (unsigned char)188;
unsigned short var_11 = (unsigned short)10165;
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
