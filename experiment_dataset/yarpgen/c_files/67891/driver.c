#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5728732492829516270ULL;
long long int var_7 = 6847471344604404489LL;
unsigned long long int var_8 = 6551804663320755705ULL;
long long int var_12 = 9020470120194026591LL;
unsigned int var_13 = 2257704927U;
unsigned long long int var_14 = 6261538159016218643ULL;
int zero = 0;
unsigned long long int var_15 = 10880987241440536331ULL;
unsigned long long int var_16 = 16847993779231445086ULL;
_Bool var_17 = (_Bool)1;
int var_18 = 1239595090;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
