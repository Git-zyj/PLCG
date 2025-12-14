/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (((((0 ? 86554469209872089 : (((1015532824 ? 2805253936 : 32760)))))) ? (((arr_0 [i_0]) ? 102 : ((3279434471 ? 3279434472 : (arr_0 [i_0]))))) : 1));
        var_12 = ((max(1268881403, -527668790)));
        arr_3 [5] [i_0] = ((((((-527668786 ? (arr_1 [i_0]) : 100)))) ? ((-24499 ? (arr_1 [i_0]) : 56)) : (((((42943 ? -97 : 1790979076947528919))) ? (arr_1 [i_0]) : ((((arr_1 [2]) != 1790979076947528938)))))));
        arr_4 [i_0] = (max((((~16655764996762022697) & (((2058454927891911389 ? 101 : 3))))), (((-(((arr_1 [i_0]) ? 55713 : 2637)))))));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_13 = (((((103 ? (((arr_5 [i_1 - 1]) ? (arr_5 [i_1]) : 1526)) : (!188)))) ? -8150522251206206884 : (((~((-(arr_5 [i_1]))))))));
        var_14 = ((!(((((arr_7 [i_1]) ? 9819 : -527668786))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_15 = (max(var_15, 1));
        var_16 &= (((arr_9 [i_2] [i_2]) ? -527668782 : ((95 ? (arr_10 [i_2] [i_2]) : 0))));
        var_17 = 10494;
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_18 |= 4019361805;
        arr_16 [i_3] = 110;
    }
    var_19 &= (((!42957) ? var_2 : (((128968807 / 42981) ? ((22577 ? var_3 : var_9)) : var_10))));
    #pragma endscop
}
