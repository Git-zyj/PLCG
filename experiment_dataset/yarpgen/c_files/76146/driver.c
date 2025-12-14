#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)20;
unsigned long long int var_5 = 5593477081970989195ULL;
unsigned long long int var_6 = 3530554615987806768ULL;
long long int var_7 = -8996518239359336534LL;
unsigned long long int var_8 = 9053153686777244299ULL;
long long int var_9 = 7480672821543670438LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-79;
void init() {
}

void checksum() {
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
