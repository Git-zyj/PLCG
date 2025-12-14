#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 689768561U;
unsigned int var_13 = 3453238092U;
int zero = 0;
long long int var_19 = -2999008231881791722LL;
unsigned char var_20 = (unsigned char)58;
long long int var_21 = 5847239895097542606LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
