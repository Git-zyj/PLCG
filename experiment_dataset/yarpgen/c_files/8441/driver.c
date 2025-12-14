#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6896661713839643675LL;
long long int var_2 = -8489024875777094177LL;
long long int var_3 = 2773665830285586328LL;
long long int var_7 = 538754345774920952LL;
long long int var_11 = -3131730816908894868LL;
long long int var_15 = 1668952252430447195LL;
long long int var_16 = -7984928398870439247LL;
int zero = 0;
long long int var_17 = 7777860254659987057LL;
long long int var_18 = -7151419187475840502LL;
long long int var_19 = -8422625265976356348LL;
long long int var_20 = -288663017217037584LL;
long long int var_21 = -5539265391160892928LL;
long long int var_22 = -2036989350682948434LL;
long long int var_23 = 604862395032252796LL;
long long int var_24 = 3082532583417247767LL;
long long int var_25 = 4143160686890631083LL;
long long int var_26 = 8307285972938027989LL;
long long int var_27 = -2855420556146567671LL;
long long int var_28 = -6414919975590449315LL;
long long int arr_0 [12] [12] ;
long long int arr_1 [12] ;
long long int arr_2 [12] [12] ;
long long int arr_5 [12] [12] ;
long long int arr_6 [12] ;
long long int arr_7 [12] [12] [12] [12] ;
long long int arr_9 [12] [12] [12] ;
long long int arr_14 [12] [12] [12] ;
long long int arr_19 [12] [12] [12] [12] ;
long long int arr_20 [12] [12] [12] ;
long long int arr_12 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 8023069971703210978LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = -6901257824688253565LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = -1909034928900682422LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = -1814610028343499670LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 8330956267249185857LL : -2764605423719117336LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 6524194578260229940LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -3522165862148147441LL : 6992532798951020288LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 4814203190598087510LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 7110787558096564612LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 5969690650728111568LL : 346646416899730127LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? -7872084072575405173LL : 553657079476553777LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
