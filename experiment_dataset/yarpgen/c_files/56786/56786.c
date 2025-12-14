/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_4, var_12));
    var_15 = (min(var_15, var_11));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_16 ^= (arr_3 [14] [i_0] [14]);
            arr_6 [i_0] = max(var_3, (min((((~(arr_1 [i_0])))), (arr_0 [i_0] [i_0]))));
        }
        var_17 = var_1;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_18 = (min(var_18, ((min((arr_5 [i_2] [i_2]), ((~(max((arr_7 [i_2]), (arr_4 [i_2] [i_2] [i_2]))))))))));
        var_19 = var_10;
    }
    var_20 = (min(((~(max(4950231627012653899, var_7)))), -32748));

    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 21;i_6 += 1)
                {
                    {
                        var_21 = (min(var_21, 3230986648295541686));

                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            arr_24 [i_3] [i_3] [i_6 - 3] [i_3] [18] = ((max(-3230986648295541677, var_0)));
                            var_22 = (min(var_22, var_4));
                            arr_25 [14] [i_4] |= (arr_15 [i_3] [i_3] [i_3]);
                            var_23 = (arr_17 [i_3] [i_5 + 1] [i_6 - 1] [i_3]);
                        }
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            var_24 += (min((arr_20 [21] [i_4 + 1] [i_4] [i_4]), (arr_26 [i_8] [i_6] [i_5] [i_4 + 1] [11])));
                            var_25 = (3230986648295541666 || 3230986648295541677);
                            var_26 ^= (arr_13 [1]);
                        }
                    }
                }
            }
        }
        var_27 = (min((min((max(var_2, (arr_18 [i_3] [i_3] [i_3] [i_3]))), (((var_3 ? (arr_22 [i_3] [i_3] [i_3]) : (arr_21 [i_3] [i_3] [i_3] [1] [i_3])))))), ((max(var_13, (arr_17 [i_3] [i_3] [i_3 - 2] [i_3]))))));
        arr_30 [i_3] = (arr_28 [i_3]);
        arr_31 [i_3] [i_3] = (arr_26 [i_3] [i_3] [16] [i_3 - 2] [i_3 - 2]);
    }
    #pragma endscop
}
