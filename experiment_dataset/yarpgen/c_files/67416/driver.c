#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3978886858050048598ULL;
unsigned short var_9 = (unsigned short)22249;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)60;
unsigned long long int var_15 = 9654960283671260879ULL;
void init() {
}

void checksum() {
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
