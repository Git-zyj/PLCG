#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)4516;
int var_2 = 1152731540;
int var_3 = -104944058;
unsigned long long int var_6 = 8014681421051248177ULL;
short var_7 = (short)9003;
long long int var_9 = -4046672405817565773LL;
long long int var_10 = -9101653874787088646LL;
int zero = 0;
unsigned short var_12 = (unsigned short)31163;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)32151;
unsigned short var_15 = (unsigned short)53028;
long long int var_16 = 7819475139473036993LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
