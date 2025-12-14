#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-31;
unsigned int var_1 = 957439510U;
signed char var_2 = (signed char)-114;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 15612700481966213454ULL;
unsigned long long int var_6 = 14001489706036049576ULL;
short var_8 = (short)2637;
unsigned long long int var_9 = 13775578936878659109ULL;
short var_11 = (short)25227;
unsigned long long int var_12 = 8422400207135125000ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)162;
unsigned int var_14 = 1537372250U;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 15018039790124424642ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
