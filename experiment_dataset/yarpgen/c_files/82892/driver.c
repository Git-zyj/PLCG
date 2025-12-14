#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7428073060856410032LL;
unsigned long long int var_10 = 16553970850719641778ULL;
unsigned long long int var_11 = 7232043714612853161ULL;
unsigned char var_16 = (unsigned char)102;
int zero = 0;
int var_17 = 163259056;
long long int var_18 = 2756388884724815478LL;
unsigned long long int var_19 = 10086590073787658486ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
