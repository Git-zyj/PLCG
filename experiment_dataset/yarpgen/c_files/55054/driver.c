#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-23;
unsigned short var_3 = (unsigned short)50784;
unsigned long long int var_9 = 499898203381549140ULL;
int zero = 0;
signed char var_10 = (signed char)-117;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 17493911633625913672ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
