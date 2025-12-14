#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54298;
unsigned long long int var_7 = 17473260359340092942ULL;
long long int var_9 = 4614151569295880549LL;
int zero = 0;
unsigned int var_18 = 1947867113U;
unsigned long long int var_19 = 9539546467024419992ULL;
void init() {
}

void checksum() {
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
