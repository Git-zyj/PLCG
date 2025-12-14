/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_4;
    var_21 = ((var_15 ? (((min(var_13, var_17)) & (((var_5 << (var_12 - 14907953687236974446)))))) : ((max(var_9, ((var_8 ? var_18 : var_1)))))));
    var_22 = ((!(((-(~32750))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_23 = ((var_3 != ((((((arr_2 [i_0] [i_0]) ? (arr_1 [i_0 + 2] [i_0 + 2]) : (arr_0 [i_0]))))))));
                arr_5 [i_0] = (min(var_11, var_3));
                var_24 = ((((((arr_1 [i_0 + 1] [i_1 + 1]) ? (arr_2 [i_0 + 1] [i_1 - 1]) : (arr_1 [i_0 - 1] [i_1 - 1])))) ? ((((var_13 ? (arr_2 [i_0] [9]) : (arr_3 [12]))) % ((max(var_8, 117))))) : (min((((arr_3 [i_0]) ? var_15 : var_10)), (((arr_0 [i_0]) ? var_0 : (arr_2 [i_1] [i_0])))))));
            }
        }
    }
    var_25 = var_18;
    #pragma endscop
}
