#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8107628253500132437LL;
int var_8 = -760247839;
unsigned int var_10 = 1248489330U;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 4664598327028701917ULL;
long long int var_19 = -700559614405824714LL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
