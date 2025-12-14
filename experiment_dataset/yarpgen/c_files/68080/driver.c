#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 236191471;
unsigned long long int var_2 = 17287137101446051336ULL;
int var_3 = -1969449491;
int var_4 = -1330879576;
int var_5 = -397309124;
int var_6 = 7621304;
int var_8 = 699590600;
unsigned long long int var_9 = 3494400017738074215ULL;
int zero = 0;
int var_11 = -1495573966;
int var_12 = -282892234;
int var_13 = -360743632;
int var_14 = 1837782625;
int var_15 = -1067264931;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
