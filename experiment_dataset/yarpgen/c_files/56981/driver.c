#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4951324009061187832LL;
long long int var_5 = -6336868619496428341LL;
long long int var_6 = -5548451759698412268LL;
long long int var_7 = 6345989764736057750LL;
int zero = 0;
short var_10 = (short)25998;
int var_11 = -2053700158;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
