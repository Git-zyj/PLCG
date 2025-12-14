#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1399010245;
short var_4 = (short)-3039;
_Bool var_5 = (_Bool)0;
unsigned short var_8 = (unsigned short)36063;
short var_9 = (short)-5397;
unsigned long long int var_10 = 14052505922264160800ULL;
int var_11 = -81597215;
unsigned short var_12 = (unsigned short)11571;
signed char var_17 = (signed char)-104;
int zero = 0;
short var_19 = (short)-10225;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-54;
unsigned long long int var_22 = 8449857652308289879ULL;
short var_23 = (short)15356;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
