#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)29075;
int var_3 = -1496842467;
int var_4 = 1735066218;
short var_7 = (short)9505;
int var_11 = -161485389;
int zero = 0;
unsigned long long int var_14 = 7557309205746199353ULL;
int var_15 = -1751559581;
unsigned char var_16 = (unsigned char)99;
unsigned long long int var_17 = 1677286358226809739ULL;
unsigned char var_18 = (unsigned char)149;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
