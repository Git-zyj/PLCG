#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)48082;
unsigned short var_8 = (unsigned short)28628;
unsigned short var_9 = (unsigned short)25012;
unsigned long long int var_10 = 8134582363210025693ULL;
unsigned long long int var_11 = 4456876235713489406ULL;
unsigned long long int var_12 = 2318953118009444575ULL;
int zero = 0;
unsigned long long int var_13 = 16359681034447058721ULL;
long long int var_14 = -4281758133087387323LL;
unsigned short var_15 = (unsigned short)18614;
long long int var_16 = 4426514473589474192LL;
unsigned long long int var_17 = 17677350857493342016ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
