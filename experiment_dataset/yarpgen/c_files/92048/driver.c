#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)49334;
signed char var_3 = (signed char)78;
unsigned char var_5 = (unsigned char)154;
long long int var_12 = 7229105650903063115LL;
unsigned long long int var_14 = 8512928249647571600ULL;
int zero = 0;
unsigned int var_16 = 2305956934U;
int var_17 = -1793604556;
unsigned long long int var_18 = 5875437036366643190ULL;
void init() {
}

void checksum() {
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
