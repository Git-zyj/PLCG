#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 459153070U;
unsigned char var_2 = (unsigned char)39;
long long int var_9 = 4157240024656757599LL;
int zero = 0;
int var_12 = 257697321;
unsigned short var_13 = (unsigned short)3429;
unsigned char var_14 = (unsigned char)29;
void init() {
}

void checksum() {
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
