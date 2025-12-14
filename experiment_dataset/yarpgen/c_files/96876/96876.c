/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= ((var_2 * ((((((var_6 ? var_3 : -171984903)) != (~var_16)))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_19 = ((~(arr_3 [2])));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_14 [i_0 + 2] [i_0 + 2] = var_0;
                        var_20 *= (arr_2 [i_0 - 1] [i_0 + 2]);
                    }
                }
            }
            var_21 = ((-130 * (arr_8 [i_0] [i_0] [i_1] [i_1])));
            arr_15 [i_1] = arr_3 [i_0 - 1];
            arr_16 [i_0] [i_1] = ((-(arr_0 [i_0 - 1])));
        }
        var_22 = (((((arr_4 [i_0 + 1] [i_0 - 1]) + 2147483647)) >> (((arr_4 [i_0 + 2] [i_0 + 2]) + 735915261))));
        var_23 ^= -18382;
    }
    var_24 &= -var_13;
    var_25 = ((((((var_4 / 84) ? var_10 : (min(var_2, var_16))))) > (max((min(var_9, var_15)), (var_16 && var_13)))));
    #pragma endscop
}
