#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6804329633444506751LL;
long long int var_6 = 8791429237493973671LL;
int var_7 = 1328430385;
unsigned long long int var_8 = 7238432338228219612ULL;
long long int var_9 = -1517372544780212766LL;
int zero = 0;
unsigned int var_10 = 876182391U;
unsigned short var_11 = (unsigned short)54120;
_Bool var_12 = (_Bool)1;
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
