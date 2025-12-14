#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -3470331340982177083LL;
long long int var_10 = -4335751003295107966LL;
int zero = 0;
unsigned long long int var_20 = 5860767730255325748ULL;
unsigned short var_21 = (unsigned short)32817;
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
