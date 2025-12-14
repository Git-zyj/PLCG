#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -116995565;
long long int var_2 = -57914368986853130LL;
short var_3 = (short)-8748;
unsigned long long int var_5 = 850893468500101262ULL;
signed char var_6 = (signed char)-10;
long long int var_7 = 5287370924661514054LL;
unsigned long long int var_8 = 13727502783095437672ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_10 = (signed char)86;
unsigned short var_11 = (unsigned short)38907;
unsigned short var_12 = (unsigned short)28004;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
