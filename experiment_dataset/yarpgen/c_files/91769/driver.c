#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 948768690;
short var_2 = (short)-3098;
unsigned long long int var_3 = 6616404597175261494ULL;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 949584956U;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-2882;
void init() {
}

void checksum() {
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
