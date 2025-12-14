#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1420914879;
unsigned short var_12 = (unsigned short)18356;
unsigned int var_13 = 850648148U;
int zero = 0;
unsigned int var_18 = 3666795914U;
unsigned int var_19 = 3286954298U;
void init() {
}

void checksum() {
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
