#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)21495;
unsigned short var_7 = (unsigned short)53755;
unsigned long long int var_9 = 5953544332299243103ULL;
signed char var_11 = (signed char)22;
int zero = 0;
signed char var_13 = (signed char)105;
short var_14 = (short)6381;
void init() {
}

void checksum() {
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
