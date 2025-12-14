#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)59481;
long long int var_4 = 7968413268606024846LL;
int var_7 = 1967456779;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 4147727694U;
short var_21 = (short)25804;
short var_22 = (short)20956;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
