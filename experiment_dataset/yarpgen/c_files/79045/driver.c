#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-11663;
short var_11 = (short)26240;
unsigned short var_15 = (unsigned short)35177;
int var_18 = 1425688618;
unsigned long long int var_19 = 2948402224468264416ULL;
int zero = 0;
signed char var_20 = (signed char)14;
unsigned long long int var_21 = 15346495198325467201ULL;
short var_22 = (short)13244;
void init() {
}

void checksum() {
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
