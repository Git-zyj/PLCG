#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -561911614199015485LL;
unsigned long long int var_2 = 16702256037510540683ULL;
unsigned long long int var_5 = 3815102752474885497ULL;
unsigned char var_6 = (unsigned char)134;
unsigned char var_9 = (unsigned char)36;
int zero = 0;
unsigned int var_10 = 3625777428U;
unsigned long long int var_11 = 3924953714427581588ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
