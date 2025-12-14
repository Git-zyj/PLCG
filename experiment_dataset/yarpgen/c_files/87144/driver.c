#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 909516257948028751LL;
long long int var_6 = -8087319101370613439LL;
signed char var_8 = (signed char)103;
int zero = 0;
unsigned short var_13 = (unsigned short)11675;
unsigned short var_14 = (unsigned short)52803;
signed char var_15 = (signed char)83;
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
