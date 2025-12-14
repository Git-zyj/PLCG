#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2079119897U;
unsigned int var_1 = 3231604454U;
unsigned int var_2 = 1699310473U;
long long int var_3 = 8373616076003678150LL;
unsigned int var_6 = 1191099768U;
long long int var_8 = -8831562953710085116LL;
unsigned int var_9 = 3287403397U;
long long int var_11 = 6971818307080501308LL;
int zero = 0;
long long int var_12 = 2337381072244614904LL;
long long int var_13 = -3660294397525844437LL;
void init() {
}

void checksum() {
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
