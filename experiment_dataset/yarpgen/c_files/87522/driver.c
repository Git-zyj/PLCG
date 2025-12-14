#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)19187;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)76;
unsigned long long int var_6 = 4170387395822253894ULL;
unsigned int var_8 = 3086262252U;
short var_10 = (short)-14907;
unsigned long long int var_11 = 12042219004542940913ULL;
unsigned long long int var_12 = 9655487035593557548ULL;
int zero = 0;
short var_17 = (short)-27650;
signed char var_18 = (signed char)9;
short var_19 = (short)25317;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
