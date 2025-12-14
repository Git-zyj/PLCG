#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -162134798790581291LL;
signed char var_5 = (signed char)17;
long long int var_6 = 3142289799405223819LL;
short var_9 = (short)12658;
long long int var_12 = 7167868255101602158LL;
signed char var_14 = (signed char)-110;
int zero = 0;
long long int var_17 = -8543015560279190385LL;
long long int var_18 = 6496853578270049896LL;
signed char var_19 = (signed char)97;
long long int var_20 = 8888659811406500228LL;
long long int var_21 = -9212324148281630340LL;
long long int var_22 = 4374244641840203310LL;
signed char arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (signed char)124;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
