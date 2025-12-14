#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2419177687158064487LL;
unsigned long long int var_3 = 8649160863156959264ULL;
short var_4 = (short)-22489;
unsigned long long int var_10 = 7771146885132490648ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)181;
long long int var_14 = -8335101739663273416LL;
long long int var_15 = -6713876704368214143LL;
void init() {
}

void checksum() {
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
