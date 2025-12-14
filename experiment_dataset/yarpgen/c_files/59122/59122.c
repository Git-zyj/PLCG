/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_12 != ((min(var_15, var_15))))) ? (((((max(59025, 11249))) < 2251799813685247))) : -52);
    var_21 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [20] = ((((((arr_1 [i_0 - 1]) ? var_7 : ((max(var_3, var_7)))))) ? (max(5, ((65535 ? var_11 : 0)))) : (100 & 0)));
                var_22 = (max(var_22, ((max((((arr_3 [i_0 + 2] [i_1 - 1] [i_1]) ? -1 : 59025)), (((0 ? 32762 : 1))))))));
                var_23 = (min((32767 | -94), ((((min(var_7, (arr_4 [8] [i_1 + 1] [13])))) ? (max(32767, (arr_2 [i_1]))) : (min(5, (arr_2 [i_0])))))));
            }
        }
    }
    var_24 = (max((min((1 - 65531), var_5)), (max(((1 ? -68 : 1)), ((127 ? -56 : 21428))))));
    #pragma endscop
}
