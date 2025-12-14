#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-102;
long long int var_1 = -3400800455064235280LL;
signed char var_3 = (signed char)40;
short var_4 = (short)-20490;
signed char var_5 = (signed char)-51;
unsigned long long int var_10 = 807372418975453478ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 3584187811743780385ULL;
unsigned int var_14 = 3188634731U;
short var_15 = (short)7869;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
