#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-77;
short var_5 = (short)-21655;
unsigned int var_8 = 3921644859U;
int zero = 0;
unsigned long long int var_12 = 13920429582956180115ULL;
signed char var_13 = (signed char)-15;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 15402278289380661041ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
