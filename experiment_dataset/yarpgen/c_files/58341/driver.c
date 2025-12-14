#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2079283516354069679ULL;
unsigned long long int var_1 = 12112619324568057479ULL;
unsigned long long int var_3 = 13968439286215970691ULL;
unsigned long long int var_4 = 7728885485181840679ULL;
unsigned long long int var_5 = 15380113613895538640ULL;
unsigned long long int var_6 = 14234978478527239771ULL;
unsigned long long int var_7 = 13956570623251109706ULL;
unsigned long long int var_9 = 6230626300015350645ULL;
unsigned long long int var_10 = 17209221857688696184ULL;
unsigned long long int var_12 = 7651952941668252078ULL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 5535715082633412249ULL;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 4698523252879175718ULL;
int zero = 0;
unsigned long long int var_20 = 16244115125779191729ULL;
_Bool var_21 = (_Bool)0;
unsigned long long int arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 16436585809082383589ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
