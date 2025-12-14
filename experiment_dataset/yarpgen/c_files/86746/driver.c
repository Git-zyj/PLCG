#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3431169333U;
int var_7 = 571481170;
int var_8 = -1494036348;
unsigned char var_10 = (unsigned char)9;
int zero = 0;
long long int var_11 = 7355933176999213504LL;
long long int var_12 = 2368594829601738546LL;
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
