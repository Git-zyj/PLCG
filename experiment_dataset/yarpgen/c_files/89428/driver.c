#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1224150774;
unsigned long long int var_2 = 836320003395587105ULL;
long long int var_8 = 3790044432578583642LL;
unsigned char var_9 = (unsigned char)177;
int zero = 0;
long long int var_10 = -6192546230844298226LL;
unsigned char var_11 = (unsigned char)187;
signed char var_12 = (signed char)25;
int var_13 = 899573385;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
