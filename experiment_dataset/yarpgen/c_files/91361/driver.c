#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2107277422;
short var_5 = (short)16425;
unsigned long long int var_7 = 13918722474899936669ULL;
unsigned short var_10 = (unsigned short)20708;
_Bool var_13 = (_Bool)1;
unsigned char var_15 = (unsigned char)142;
int zero = 0;
unsigned long long int var_18 = 12828665422659267966ULL;
unsigned long long int var_19 = 15666336464973763443ULL;
short var_20 = (short)11877;
void init() {
}

void checksum() {
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
