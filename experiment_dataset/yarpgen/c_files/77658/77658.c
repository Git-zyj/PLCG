/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_13 = (min(var_13, (((((((26171 ? var_6 : (arr_0 [i_0] [i_0])))) / ((var_9 ? var_10 : (arr_1 [i_0]))))) <= ((((-2147483647 - 1) ? (arr_1 [i_0]) : (var_12 < 4194303))))))));
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
        var_14 ^= var_12;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_15 ^= (((-4194304 && var_6) ? (~var_9) : var_0));
        var_16 = (min(var_16, (!var_10)));
        var_17 = (min(var_17, (var_12 * var_6)));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_18 = (max(var_18, ((((var_10 ? (arr_1 [i_2]) : (arr_1 [i_2])))))));
        var_19 ^= (~52);
        var_20 = var_5;
    }
    var_21 = (max((((var_12 ? var_12 : var_9))), (1419240888433231788 * 0)));
    var_22 = (min(var_22, (((-((var_7 ? var_4 : (var_1 * var_12))))))));
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {

                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    var_23 = (arr_4 [i_4] [i_4]);
                    var_24 = ((var_1 & (!-1419240888433231789)));
                    var_25 = (((arr_1 [i_3]) ? ((((arr_3 [i_3 - 1]) ? (arr_3 [i_3 + 1]) : var_11))) : ((((min(var_4, -119))) ? (((arr_9 [i_5]) ? (arr_1 [i_3]) : var_8)) : (arr_8 [i_3])))));
                    arr_16 [i_3 + 1] [i_4] [i_4] [i_5] = max((4194284 * 4194284), -1419240888433231789);
                }
                var_26 *= min(((90 ? 0 : 3628435857)), ((((55 - -10574) << (var_1 - 157)))));
            }
        }
    }
    #pragma endscop
}
