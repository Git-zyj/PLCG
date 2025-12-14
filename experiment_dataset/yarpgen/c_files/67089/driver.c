#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5131682770504946693LL;
signed char var_3 = (signed char)-4;
long long int var_7 = 7846158533547223997LL;
unsigned short var_10 = (unsigned short)8097;
int zero = 0;
int var_19 = -325632629;
unsigned long long int var_20 = 7230275568208584464ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
