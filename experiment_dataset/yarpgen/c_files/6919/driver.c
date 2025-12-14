#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-29;
unsigned char var_5 = (unsigned char)183;
long long int var_6 = -7676368327706898139LL;
signed char var_9 = (signed char)5;
int zero = 0;
unsigned int var_17 = 124726771U;
unsigned char var_18 = (unsigned char)194;
long long int var_19 = -7711320970880834337LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
