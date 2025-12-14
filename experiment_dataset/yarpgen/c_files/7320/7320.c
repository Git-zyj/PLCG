/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= var_6;

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_16 -= (arr_1 [2]);

        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            var_17 = (((-31 ? var_6 : (arr_1 [i_0]))));
            var_18 = var_10;
            var_19 = ((((((-(-127 - 1))))) ? -var_12 : ((-(arr_2 [i_0])))));
            arr_5 [i_0] = (arr_2 [i_0]);
        }
        /* vectorizable */
        for (int i_2 = 3; i_2 < 20;i_2 += 1)
        {
            var_20 = ((((arr_8 [i_0] [i_2]) ? var_13 : 0)));
            var_21 = -42;
        }
        arr_10 [i_0] = (((((-((42 ? 34 : (arr_8 [i_0 + 1] [i_0])))))) ? var_12 : ((123 ? 2457 : (arr_9 [i_0 + 1])))));
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 22;i_5 += 1)
                {
                    {
                        arr_17 [i_0] = 41;
                        arr_18 [i_0] [i_4] [15] [i_0] = (~((~(~1))));
                    }
                }
            }
        }
    }
    for (int i_6 = 3; i_6 < 8;i_6 += 1)
    {
        arr_21 [i_6 - 2] = ((-((-((-236945792 ? var_13 : 1))))));
        var_22 += ((((((min(123, 1))) == (arr_4 [i_6] [10] [7]))) ? (min(var_14, (~0))) : ((min(var_10, 0)))));
    }
    var_23 = (min(0, (!var_11)));
    #pragma endscop
}
