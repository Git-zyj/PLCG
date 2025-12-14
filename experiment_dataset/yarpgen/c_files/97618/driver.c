#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3529267314490968676LL;
unsigned char var_4 = (unsigned char)91;
long long int var_8 = 2689155964363916264LL;
int var_10 = -1417257431;
unsigned char var_11 = (unsigned char)126;
int zero = 0;
signed char var_13 = (signed char)-27;
int var_14 = 644735205;
unsigned int var_15 = 2920124140U;
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
