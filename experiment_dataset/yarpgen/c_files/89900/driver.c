#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -6198400748832189252LL;
long long int var_8 = -5664943025425038300LL;
unsigned long long int var_9 = 4362757491478357547ULL;
long long int var_14 = -250269273833168259LL;
int zero = 0;
unsigned short var_20 = (unsigned short)8493;
unsigned char var_21 = (unsigned char)151;
void init() {
}

void checksum() {
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
