#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2519588076258067513LL;
long long int var_3 = 5688567203074204122LL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 4260835744440670627ULL;
unsigned short var_8 = (unsigned short)43677;
int var_9 = -1537914298;
unsigned short var_10 = (unsigned short)61147;
short var_11 = (short)-10953;
int zero = 0;
int var_13 = -1689073793;
unsigned short var_14 = (unsigned short)19962;
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
