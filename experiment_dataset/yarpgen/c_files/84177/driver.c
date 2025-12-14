#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)25;
signed char var_9 = (signed char)-38;
signed char var_10 = (signed char)20;
unsigned int var_16 = 2508798325U;
unsigned long long int var_18 = 150105393899579926ULL;
int zero = 0;
unsigned int var_20 = 2038861943U;
unsigned long long int var_21 = 14972526598558304184ULL;
long long int var_22 = 75924910145889314LL;
unsigned long long int var_23 = 209326256133294510ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
