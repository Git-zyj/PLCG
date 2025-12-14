#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2195675067948651632ULL;
signed char var_1 = (signed char)-69;
signed char var_5 = (signed char)-38;
signed char var_10 = (signed char)56;
unsigned long long int var_11 = 14191169573779300611ULL;
unsigned long long int var_15 = 4141332298058599291ULL;
int zero = 0;
unsigned long long int var_18 = 650064741779211354ULL;
signed char var_19 = (signed char)110;
void init() {
}

void checksum() {
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
