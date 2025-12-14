/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_0] [i_1] = ((~93) ? ((((max(12, 136))) ? ((67 ? 12042394628592078723 : 48)) : (((~(arr_4 [i_1] [i_2])))))) : (arr_5 [i_0] [i_1] [i_0]));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_20 = ((~((0 ? 0 : 157))));
                                var_21 = (min(36, ((~(arr_2 [i_0] [8])))));
                                arr_15 [i_4 + 2] [i_1] [12] [8] [8] [i_1] |= (!250);
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (var_5 ? var_3 : ((min(var_17, var_7))));

    for (int i_5 = 2; i_5 < 12;i_5 += 1)
    {
        var_23 = (((min((((arr_4 [2] [2]) ? (arr_10 [i_5 - 1] [i_5]) : (arr_13 [i_5 - 1] [i_5] [i_5] [i_5 - 1]))), ((min(78, (arr_12 [2] [i_5] [i_5] [i_5 - 1] [i_5]))))))) ? (((~(arr_17 [i_5 - 1])))) : ((((((arr_1 [i_5 + 1]) ? 1 : 0))) ? (arr_13 [i_5] [4] [i_5 - 2] [i_5 + 1]) : (((26 ? 11 : 67))))));
        var_24 = 188;
    }
    #pragma endscop
}
