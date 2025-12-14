#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)47;
unsigned char var_2 = (unsigned char)123;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)142;
int var_7 = -1606737551;
long long int var_8 = 3445280587342937579LL;
int var_9 = -924642604;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)48376;
long long int var_12 = -155907760851910713LL;
unsigned long long int var_13 = 18278097842182806389ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
