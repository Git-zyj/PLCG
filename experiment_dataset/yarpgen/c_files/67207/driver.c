#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-108;
int var_10 = -1284701516;
unsigned long long int var_16 = 17601783871500619007ULL;
unsigned long long int var_18 = 14458060847628971013ULL;
unsigned long long int var_19 = 15294528032891909081ULL;
int zero = 0;
unsigned long long int var_20 = 16649419610596945327ULL;
unsigned short var_21 = (unsigned short)3303;
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
