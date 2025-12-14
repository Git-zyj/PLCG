#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-52;
long long int var_1 = -8237421744114407242LL;
unsigned long long int var_2 = 2659998265006113739ULL;
short var_3 = (short)24512;
unsigned int var_5 = 3424145761U;
long long int var_6 = 5151933344530187831LL;
short var_7 = (short)27500;
unsigned int var_9 = 2431095294U;
unsigned int var_10 = 1939167410U;
unsigned int var_11 = 3328592629U;
unsigned int var_12 = 2903013127U;
int zero = 0;
unsigned long long int var_13 = 17625415498713395409ULL;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 11719610028840318871ULL;
short var_16 = (short)-23944;
int var_17 = -1856373294;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
