#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13382254186294007267ULL;
unsigned long long int var_1 = 4256425579292303798ULL;
_Bool var_3 = (_Bool)0;
int var_4 = 1425983058;
int var_5 = 800501529;
unsigned long long int var_6 = 15247425557053493947ULL;
unsigned int var_7 = 2162079803U;
unsigned int var_8 = 3715088036U;
unsigned char var_9 = (unsigned char)39;
int zero = 0;
unsigned long long int var_11 = 14472101502668280033ULL;
unsigned int var_12 = 1663474510U;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
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
