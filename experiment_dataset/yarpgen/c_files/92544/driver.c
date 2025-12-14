#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7122418415084049448LL;
int zero = 0;
unsigned short var_19 = (unsigned short)32472;
long long int var_20 = 8274891697146215599LL;
long long int var_21 = -910423878480974157LL;
unsigned long long int var_22 = 7710711518258909832ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
