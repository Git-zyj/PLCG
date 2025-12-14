#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2967960322577095752ULL;
unsigned short var_6 = (unsigned short)25315;
int var_13 = 684517284;
int var_16 = 984077108;
int zero = 0;
unsigned long long int var_20 = 3384998218247655860ULL;
unsigned long long int var_21 = 7558505511607076611ULL;
unsigned short var_22 = (unsigned short)60567;
void init() {
}

void checksum() {
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
