#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16682946122760553350ULL;
unsigned long long int var_6 = 9700912575691868932ULL;
int var_9 = -603301794;
unsigned long long int var_10 = 3860757309587648628ULL;
unsigned short var_12 = (unsigned short)10119;
int zero = 0;
unsigned long long int var_15 = 17718756355423850516ULL;
unsigned short var_16 = (unsigned short)53932;
unsigned long long int var_17 = 8302424802929474334ULL;
unsigned char var_18 = (unsigned char)75;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
