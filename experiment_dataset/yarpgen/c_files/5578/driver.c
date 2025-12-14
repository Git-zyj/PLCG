#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3282521388U;
int var_4 = 1144822039;
short var_11 = (short)22919;
int zero = 0;
signed char var_18 = (signed char)56;
unsigned char var_19 = (unsigned char)61;
long long int var_20 = -2367780601701071348LL;
unsigned short var_21 = (unsigned short)37884;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
