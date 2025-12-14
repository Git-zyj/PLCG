#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4321637599186419809LL;
long long int var_5 = 1649414823231420517LL;
int var_7 = 1559658533;
unsigned long long int var_8 = 17774320396513943066ULL;
int var_9 = -1787585255;
unsigned int var_10 = 971900270U;
int zero = 0;
_Bool var_11 = (_Bool)0;
int var_12 = -1989619858;
unsigned long long int var_13 = 9175202657886252244ULL;
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
