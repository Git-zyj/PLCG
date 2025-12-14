#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8682319206622258186LL;
unsigned long long int var_3 = 1693645396704414637ULL;
unsigned long long int var_4 = 7661919203082193507ULL;
long long int var_6 = -4170187417050542483LL;
int var_11 = 1697617454;
unsigned long long int var_14 = 12483448014837151001ULL;
int zero = 0;
unsigned long long int var_16 = 12808627262722011018ULL;
int var_17 = 2064289057;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
