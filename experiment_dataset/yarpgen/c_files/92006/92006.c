/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_13 = var_12;
                        var_14 ^= (min(((((((var_11 ? var_3 : var_2))) ? var_11 : (!var_1)))), (min(((var_12 ? var_6 : var_1)), (((13260 ? -13261 : 13260)))))));
                        var_15 -= (max((max(((min(var_1, var_7))), ((var_9 ? var_6 : var_3)))), ((((max(var_8, var_0))) ? ((var_8 ? var_3 : var_10)) : var_9))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 20;i_6 += 1)
                {
                    {

                        for (int i_7 = 2; i_7 < 20;i_7 += 1)
                        {
                            arr_19 [i_0] [i_0] [i_0 - 4] = min((min((min(var_3, var_0)), (((var_6 ? var_0 : var_5))))), (((65535 ? 1720082535 : 0))));
                            var_16 = min(-1912800904, 18446744073709551615);
                            arr_20 [i_0] [i_4] [i_5] [i_4] [i_7] = (max(-13261, -1912800904));
                            arr_21 [i_0] [i_0 - 4] [i_0 + 1] [i_0] [i_0] [i_0 + 2] = (min((~-var_5), var_4));
                        }
                        var_17 = var_7;
                        arr_22 [i_0] [i_0] [i_0] [i_0] = var_7;
                        var_18 += max(var_1, (min(((max(var_4, var_7))), (max(var_10, var_2)))));
                    }
                }
            }
        }
        var_19 = 65535;
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                {
                    arr_27 [i_8] = ((((min((max(var_5, var_1)), ((min(var_11, var_6)))))) ? (~-var_2) : ((((!((min(4, 0)))))))));
                    var_20 -= (!-13260);
                }
            }
        }
    }
    var_21 = ((min(((var_3 ? var_0 : var_5), (((var_9 ? var_7 : var_8)))))));
    #pragma endscop
}
