#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1993126433;
long long int var_6 = 8365674936829817659LL;
int var_7 = 683018102;
int zero = 0;
unsigned int var_11 = 1140389621U;
unsigned short var_12 = (unsigned short)30817;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
