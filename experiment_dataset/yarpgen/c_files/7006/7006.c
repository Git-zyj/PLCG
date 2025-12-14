/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = (max(var_13, (((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))))));
        var_14 = ((var_9 ^ (((-26271 ? (arr_1 [i_0] [i_0]) : var_1)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 = (min(((((((arr_1 [i_0] [i_2]) ? 1 : 15037767783593822727))) ? (((var_9 && (arr_7 [i_0] [i_1] [i_2])))) : ((max(var_9, -26263))))), ((((arr_6 [14] [i_1]) || var_3)))));
                    var_16 = (max(var_16, var_11));
                }
            }
        }
        var_17 = (((((~(arr_6 [i_0] [i_0])))) ? (arr_7 [i_0] [16] [i_0]) : (((arr_6 [i_0] [i_0]) ? (arr_6 [i_0] [i_0]) : (arr_7 [i_0] [4] [i_0])))));
        var_18 += (-(((arr_9 [i_0] [i_0] [i_0] [i_0]) ? (arr_6 [i_0] [i_0]) : 7)));
    }
    var_19 = (max(var_19, var_2));
    var_20 = ((min(var_7, 15037767783593822727)));
    var_21 ^= var_7;
    #pragma endscop
}
