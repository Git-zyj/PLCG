/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (var_16 == 1);

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_21 = 1;
        var_22 = (min(var_22, ((((((((min(var_9, (arr_1 [i_0])))) ? (max(-7686614359333757314, var_11)) : 7686614359333757314))) ? (arr_1 [5]) : (((arr_1 [i_0]) ? 251 : 1612711144)))))));

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_23 ^= ((var_4 >= (var_11 < var_2)));
                            var_24 += (min((var_12 < var_2), (((var_19 | var_8) ? var_12 : ((min(var_2, var_17)))))));
                            var_25 = var_14;
                            arr_13 [i_3] [i_3] [i_3] [i_3] [i_3] = var_0;
                        }
                    }
                }
            }
            var_26 ^= ((-(-2147483629 / 10)));
            arr_14 [i_0] [i_1] = (~var_4);
            arr_15 [4] [i_0] [11] = (0 < 10);
        }
        for (int i_5 = 3; i_5 < 19;i_5 += 1)
        {
            arr_19 [i_0] [i_5] = ((((var_14 ? var_18 : var_13)) / var_10));
            var_27 -= -7686614359333757315;
        }
    }
    #pragma endscop
}
