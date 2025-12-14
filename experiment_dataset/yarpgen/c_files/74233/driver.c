#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1430;
int var_4 = -817829528;
_Bool var_6 = (_Bool)0;
unsigned long long int var_8 = 9294495505025698207ULL;
unsigned long long int var_9 = 13144408340407589569ULL;
int var_10 = -1844116446;
_Bool var_11 = (_Bool)0;
int var_12 = -1306340433;
int var_13 = -1254471494;
int zero = 0;
long long int var_16 = 6497966641071304804LL;
unsigned long long int var_17 = 8177470287785801111ULL;
signed char var_18 = (signed char)39;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
