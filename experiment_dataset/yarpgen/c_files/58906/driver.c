#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7162138188445136352ULL;
int var_2 = 1607031117;
signed char var_3 = (signed char)-96;
signed char var_6 = (signed char)38;
unsigned long long int var_9 = 14999556652155596020ULL;
_Bool var_13 = (_Bool)1;
signed char var_15 = (signed char)-93;
unsigned int var_16 = 792568385U;
int zero = 0;
unsigned int var_17 = 3887969059U;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
