#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)75;
int var_1 = 2061749124;
signed char var_2 = (signed char)-73;
_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 17101301832084575939ULL;
unsigned long long int var_6 = 9215155311262212299ULL;
signed char var_8 = (signed char)-109;
signed char var_14 = (signed char)-114;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)-72;
_Bool var_19 = (_Bool)1;
long long int var_20 = -4266019679401142489LL;
int var_21 = -1994082953;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
