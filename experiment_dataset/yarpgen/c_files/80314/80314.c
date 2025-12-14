/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_11));
    var_17 = 63;
    var_18 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_0 + 1] [i_1] = (min((~55), (max(1792, var_6))));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_19 |= (((((~(((arr_0 [i_0 + 2]) ? (-2147483647 - 1) : var_5))))) ? ((((arr_10 [14] [i_1 + 1] [14]) ? (arr_2 [i_1] [i_3]) : (255 & 128)))) : (max(0, 32767))));
                        arr_11 [i_0 - 1] [i_1] [i_2] [9] = (arr_7 [i_0 + 1] [i_1 - 1] [i_1 - 1] [i_3]);
                        var_20 = ((((((arr_1 [i_0] [i_1]) ? (arr_3 [i_0] [i_1]) : ((var_2 ? (arr_10 [i_0] [i_1] [i_1]) : (arr_2 [i_1] [i_3])))))) ? (((1984 & (arr_0 [i_0 + 3])))) : (min((((arr_6 [i_1]) ^ (arr_6 [i_0]))), (~190)))));
                    }
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        var_21 = (4611686018427387904 || 1);
                        var_22 = (((((var_12 ? (((-292672972 ? 192 : 254))) : ((5925 * (arr_0 [i_2])))))) && ((max((((arr_12 [i_0 - 1] [i_1 - 1] [i_2] [i_2] [i_4] [i_4 + 3]) ? var_8 : (arr_9 [i_0] [i_0] [i_2] [i_4 - 2]))), ((((arr_4 [i_0 - 1] [i_1] [i_1]) > var_5))))))));
                    }

                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_23 = (((arr_4 [i_1] [i_1] [i_1]) ? (((max(var_1, (arr_7 [i_0 + 3] [i_0 + 2] [i_0 + 2] [i_1 + 1]))))) : (((arr_1 [i_2] [i_0]) + (arr_4 [i_1] [10] [i_1])))));
                        arr_17 [i_0] [i_1 - 1] [i_2] [i_1] [i_5] = 57344;
                    }
                    var_24 = (~(max((max(4836942572359009794, 31)), 4836942572359009794)));
                }
            }
        }
    }
    var_25 = (max(var_3, ((min(2, 2147483647)))));
    #pragma endscop
}
