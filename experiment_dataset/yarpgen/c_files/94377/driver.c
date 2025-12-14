#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-4206;
long long int var_3 = 8803673257429505652LL;
short var_13 = (short)-28310;
int zero = 0;
long long int var_19 = 5063945636777717081LL;
signed char var_20 = (signed char)42;
int var_21 = -1839940566;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
