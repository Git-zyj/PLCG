#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -764208522613641768LL;
long long int var_10 = 6647044073812606053LL;
long long int var_12 = -864004762064990998LL;
int zero = 0;
long long int var_13 = -4030688143396049420LL;
long long int var_14 = 7847812861338530820LL;
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
