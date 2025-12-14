#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6383525701381562649LL;
long long int var_1 = -4824464831536624730LL;
short var_2 = (short)17993;
signed char var_3 = (signed char)-94;
short var_5 = (short)-6056;
long long int var_7 = -7202280580821190944LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 13340125873127905952ULL;
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
