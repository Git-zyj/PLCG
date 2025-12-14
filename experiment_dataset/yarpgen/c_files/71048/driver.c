#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)193;
unsigned long long int var_5 = 17662174972740950194ULL;
int var_11 = -1891815073;
signed char var_15 = (signed char)-73;
long long int var_16 = -6672831196842905124LL;
long long int var_17 = 8233709933659651917LL;
int zero = 0;
signed char var_18 = (signed char)-38;
long long int var_19 = 3627610513755219250LL;
signed char var_20 = (signed char)-53;
int var_21 = 703789359;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
