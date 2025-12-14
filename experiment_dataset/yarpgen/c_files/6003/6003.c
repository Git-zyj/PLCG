/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(27569, var_6));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_12 = (max(var_12, (((min((arr_0 [i_0]), var_7))))));
        var_13 = ((((max((arr_1 [i_0] [i_0]), var_9))) ? ((~(arr_1 [i_0] [i_0]))) : (arr_1 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, ((max((arr_0 [i_1 + 2]), 8388607)))));
                    var_15 = (min((arr_4 [i_0] [i_1 + 1]), (((arr_2 [i_1 + 1] [i_1 + 1]) ? var_6 : var_0))));
                    var_16 &= var_3;
                    var_17 = (min(var_8, (min((arr_4 [i_0] [i_1 + 2]), (arr_4 [i_0] [i_1 + 1])))));
                    arr_6 [i_0] [i_2] [i_0] = ((!(var_7 + var_3)));
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_18 = (((~((min(var_9, (arr_3 [i_3] [i_3])))))));
        var_19 = (max(var_19, ((max(16, ((((arr_3 [i_3 - 1] [i_3 - 1]) == -28926))))))));
    }
    for (int i_4 = 2; i_4 < 16;i_4 += 1)
    {
        var_20 ^= (-(min((var_1 ^ 9223372036854775798), var_6)));
        var_21 = (max((((min((arr_11 [i_4 + 2] [i_4]), var_9)))), ((1 ? -134041179 : -7918394122609844007))));

        for (int i_5 = 2; i_5 < 19;i_5 += 1)
        {
            arr_14 [i_4 + 1] [i_5 - 1] [i_4 + 1] = ((((((((var_2 ? 0 : (arr_11 [i_4] [14])))) - (arr_13 [i_4 + 1] [i_5 - 2])))) ? (((min(1, 511)))) : (((-(arr_11 [i_4] [i_4]))))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 16;i_7 += 1)
                {
                    {
                        var_22 += (((arr_18 [i_4 - 1] [i_5] [i_6 + 1] [i_7 + 2]) % (min(25789, 9951887115526306028))));
                        arr_20 [i_4 - 2] [3] [3] [i_7] [3] [i_7] = var_1;
                    }
                }
            }
            var_23 *= (min((min(((((arr_18 [i_4 + 2] [9] [16] [i_4]) ? 42 : var_8))), (min(0, 250)))), ((min((arr_10 [8] [i_4 + 2]), (arr_12 [i_5]))))));
            var_24 = ((((min((arr_19 [i_4] [i_4 + 3] [i_5 - 1] [i_5 - 1]), (arr_19 [13] [i_4 - 1] [i_5 - 1] [i_5])))) ? (arr_10 [i_4] [i_5]) : (((((23 ? var_7 : 37358))) ? (((max(var_10, (arr_16 [i_4 + 1]))))) : (((arr_12 [i_5]) * 4160749568))))));
        }
        for (int i_8 = 1; i_8 < 19;i_8 += 1)
        {
            var_25 = (min(var_25, ((max(((((arr_13 [i_4 + 4] [i_8 + 1]) * (-28582 ^ 1235359267)))), (min(18446744073709551615, 0)))))));
            var_26 -= var_10;
        }
    }
    #pragma endscop
}
