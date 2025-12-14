#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)37;
_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)107;
unsigned long long int var_5 = 7655964109076074186ULL;
signed char var_6 = (signed char)92;
int var_9 = -1833326757;
int zero = 0;
int var_12 = 1438483799;
unsigned char var_13 = (unsigned char)120;
int var_14 = -824288171;
long long int var_15 = 3387993570146314748LL;
int var_16 = 1029497151;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
