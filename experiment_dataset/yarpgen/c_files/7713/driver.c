#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)73;
long long int var_3 = -3098347753857897496LL;
unsigned long long int var_6 = 5385937334975850053ULL;
short var_8 = (short)-10210;
_Bool var_11 = (_Bool)0;
signed char var_15 = (signed char)65;
int zero = 0;
unsigned long long int var_19 = 5254862629091231396ULL;
unsigned long long int var_20 = 4911855269662891201ULL;
long long int var_21 = -271156377916521521LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
