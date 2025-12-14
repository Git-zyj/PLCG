#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)214;
int var_7 = 449246389;
unsigned long long int var_8 = 16405197509491168396ULL;
unsigned int var_9 = 3751741723U;
int zero = 0;
unsigned int var_10 = 2307108081U;
unsigned char var_11 = (unsigned char)31;
long long int var_12 = -8174010584680882256LL;
short var_13 = (short)16896;
unsigned int var_14 = 2068568882U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
