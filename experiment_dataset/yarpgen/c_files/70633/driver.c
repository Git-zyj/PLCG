#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 849429059;
long long int var_1 = 2463601530579045952LL;
_Bool var_5 = (_Bool)0;
short var_8 = (short)-27900;
int var_11 = -83054109;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 11540956964439596238ULL;
int zero = 0;
unsigned int var_16 = 1548741478U;
unsigned long long int var_17 = 4484179139481072203ULL;
short var_18 = (short)-28320;
short var_19 = (short)5851;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
