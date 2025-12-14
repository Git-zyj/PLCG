#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9177546183324979208ULL;
short var_4 = (short)28237;
unsigned int var_7 = 692204611U;
unsigned int var_9 = 1054462135U;
unsigned long long int var_10 = 17310104516739093667ULL;
short var_11 = (short)22415;
int zero = 0;
int var_12 = 1654164270;
long long int var_13 = -1870624316041643638LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
