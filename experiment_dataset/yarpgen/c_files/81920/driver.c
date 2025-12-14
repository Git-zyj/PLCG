#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 396353449U;
unsigned int var_2 = 3047276399U;
unsigned int var_5 = 633688217U;
unsigned int var_6 = 3224134925U;
unsigned int var_7 = 961273495U;
unsigned int var_8 = 467209583U;
unsigned int var_9 = 1842022590U;
unsigned int var_11 = 343704791U;
int zero = 0;
unsigned int var_12 = 4268777213U;
unsigned int var_13 = 3496847256U;
unsigned int var_14 = 2175000262U;
unsigned int var_15 = 1466003387U;
void init() {
}

void checksum() {
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
