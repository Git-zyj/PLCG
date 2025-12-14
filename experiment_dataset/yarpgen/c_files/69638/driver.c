#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5495716809260382839ULL;
short var_1 = (short)9614;
unsigned long long int var_3 = 18167540588163437861ULL;
unsigned int var_5 = 3208791929U;
short var_7 = (short)27819;
int zero = 0;
short var_11 = (short)16201;
unsigned long long int var_12 = 11914201728182286000ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
