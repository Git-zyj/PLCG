#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3435641061421242915ULL;
_Bool var_2 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 3817327201U;
unsigned int var_7 = 3092033212U;
int var_9 = 1567963259;
unsigned long long int var_10 = 599917512662019340ULL;
int var_11 = 1154351718;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3575453841U;
int zero = 0;
unsigned long long int var_18 = 6520021683250540267ULL;
int var_19 = 596714312;
unsigned int var_20 = 1346779929U;
unsigned int var_21 = 3381622091U;
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
