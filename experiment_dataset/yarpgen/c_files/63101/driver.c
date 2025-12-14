#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3359392500301796396LL;
signed char var_10 = (signed char)-20;
int zero = 0;
short var_20 = (short)28718;
short var_21 = (short)3963;
unsigned short var_22 = (unsigned short)65112;
unsigned short var_23 = (unsigned short)794;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
