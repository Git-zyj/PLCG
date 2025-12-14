/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, 1499392104506243139));
    var_18 = var_13;
    var_19 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_1] = ((~(arr_3 [i_0] [i_0] [i_0])));
                    arr_8 [i_2] [i_1] [i_2] = 4294967295;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_0] [i_0] = var_0;
                                var_20 = 4294967295;
                                var_21 = var_16;
                            }
                        }
                    }
                }
            }
        }
        var_22 = (((((var_13 ? (arr_13 [i_0] [i_0]) : 0))) ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_13 [i_0] [i_0])));
        arr_15 [i_0] [i_0] = (~var_14);
    }
    for (int i_5 = 3; i_5 < 12;i_5 += 1)
    {
        var_23 *= (max(((+((max((arr_9 [i_5 - 2] [i_5 - 2] [i_5] [4]), 108))))), (!66)));
        arr_18 [i_5 - 1] = var_11;
        arr_19 [i_5] |= (min(var_14, 0));
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_24 = (((max(30, 1)) <= (-5437070307199394055 != 23)));
        var_25 ^= (min(190, -38));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_27 [i_7] = (~(var_16 ^ var_1));
        var_26 = (min(var_26, (((((min(var_15, (arr_24 [i_7])))) - (!2147483639))))));
    }
    #pragma endscop
}
