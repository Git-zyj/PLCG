#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)25569;
unsigned long long int var_3 = 8700171816332050801ULL;
short var_4 = (short)6414;
_Bool var_6 = (_Bool)0;
unsigned long long int var_9 = 13290964698584286147ULL;
int zero = 0;
unsigned long long int var_10 = 2221850405274581592ULL;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 17176617743372587642ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
