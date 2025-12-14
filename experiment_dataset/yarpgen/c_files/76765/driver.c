#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7490250602542452415ULL;
unsigned long long int var_7 = 31940141634538501ULL;
signed char var_8 = (signed char)-35;
unsigned char var_12 = (unsigned char)21;
int zero = 0;
unsigned long long int var_18 = 14108985532856162720ULL;
long long int var_19 = 2400055747684522981LL;
int var_20 = 1388008965;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
