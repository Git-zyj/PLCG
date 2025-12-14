/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (max(((((arr_0 [i_0]) == ((115 ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])))))), (((((arr_0 [i_0]) + 2147483647)) << 0))));
        var_14 = (~var_7);
        arr_2 [i_0] [i_0] = (min((((arr_0 [i_0]) & 1)), ((min(75, 123)))));
        var_15 = (281474972516352 * -0);
        arr_3 [i_0] [i_0] = 62;
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_16 = ((53 ? (((!(arr_5 [i_1 + 4])))) : ((max((arr_1 [i_1 + 1] [i_1]), ((max(var_2, 97))))))));
        var_17 = ((~((((220 ? var_8 : (arr_0 [i_1 + 4])))))));
    }
    var_18 = var_0;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                arr_11 [i_2] [i_3] = (((((var_1 * (arr_7 [3]))) - (max(-1590228408, (arr_4 [i_2] [1]))))));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_19 = (min(1, ((((23655 ? var_11 : (arr_10 [i_2] [i_2] [i_2]))) | var_3))));
                            arr_16 [i_5] [i_2] [i_3] [i_2] [i_2] = -1590228400;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
