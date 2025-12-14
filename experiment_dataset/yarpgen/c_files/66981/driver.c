#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 348178305;
unsigned int var_12 = 2639718532U;
int var_13 = 1937667662;
unsigned long long int var_14 = 216255554711959568ULL;
int var_17 = 95321925;
int zero = 0;
unsigned long long int var_19 = 15670629775310318109ULL;
unsigned long long int var_20 = 5289735339570524935ULL;
int var_21 = 779233441;
unsigned int var_22 = 3624113911U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
