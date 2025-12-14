#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15828240139528367534ULL;
unsigned long long int var_11 = 2624812052844383720ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 8592335025455811534ULL;
unsigned short var_16 = (unsigned short)40868;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
