#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 670444252U;
int var_3 = -144109685;
long long int var_4 = -412437608503503987LL;
long long int var_6 = 3423009053101496318LL;
int zero = 0;
unsigned long long int var_11 = 11918094516427623716ULL;
signed char var_12 = (signed char)81;
signed char var_13 = (signed char)53;
unsigned long long int var_14 = 8132925460702799944ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
