/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((11 == var_1) ? 17790 : var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (min(var_15, (((((min(((var_13 ? 47745 : (arr_0 [7]))), ((((arr_3 [6]) >> (var_7 + 16239))))))) ? (((((5097 ? (arr_5 [i_0] [i_1]) : (arr_1 [i_1])))) ? (max(100, 15)) : ((((arr_3 [i_0]) ? (arr_2 [i_1]) : (arr_6 [10] [i_1] [1])))))) : ((var_10 ? ((47755 ? 134217712 : 17792)) : var_3)))))));
                var_16 = (((max((arr_0 [i_0]), (arr_1 [i_0]))) - (!47754)));
            }
        }
    }
    #pragma endscop
}
