#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-44;
unsigned short var_2 = (unsigned short)13693;
signed char var_13 = (signed char)-9;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = -5529084783507475738LL;
unsigned short var_17 = (unsigned short)64757;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
