#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 360411482U;
int var_9 = -1892607320;
unsigned long long int var_10 = 12147041921143597968ULL;
unsigned long long int var_11 = 4382188314209459838ULL;
signed char var_17 = (signed char)76;
int zero = 0;
unsigned long long int var_18 = 8184830346291954023ULL;
unsigned short var_19 = (unsigned short)26567;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
