#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -405924686689274008LL;
unsigned long long int var_2 = 17959331799274432448ULL;
signed char var_6 = (signed char)-108;
signed char var_9 = (signed char)-127;
int zero = 0;
unsigned int var_14 = 1187602151U;
unsigned long long int var_15 = 7055737050163491507ULL;
void init() {
}

void checksum() {
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
