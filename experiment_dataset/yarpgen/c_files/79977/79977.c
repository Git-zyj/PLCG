/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_2 + (min(var_1, (24 | 24))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [0] [i_1] = 231;
                var_13 = (~((-((((arr_3 [11] [11]) > 12))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (arr_2 [i_0] [i_1]);
                                arr_14 [i_0] [i_1] [i_0] [3] [i_1] = (((min(218, 944724363927003834)) ^ (((-1 ? -1 : -17)))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_14 = ((((246 ? -8 : 17502019709782547754)) << (min((!21), 17095106188542911951))));
                            var_15 = (arr_7 [i_1] [11] [11]);
                        }
                    }
                }
                var_16 = ((-39 ? (arr_3 [3] [i_1]) : (((((3 ? 53 : -39))) ? (((((arr_2 [8] [i_1]) || (arr_8 [i_1] [11] [i_1] [2]))))) : ((13 ? (arr_10 [i_1] [8] [i_1] [i_1] [i_1] [3] [i_1]) : var_3))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 4; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 20;i_9 += 1)
            {
                {
                    var_17 = ((var_3 >> (((((arr_26 [i_7] [15] [i_7] [i_7]) & (arr_26 [i_8] [i_8 + 1] [22] [i_8 - 1]))) - 187))));
                    var_18 = var_1;
                    var_19 = (((1 <= 7) * (arr_23 [i_7])));
                }
            }
        }
    }
    var_20 = ((111 ? ((min(-16, 37))) : 3));
    var_21 = (~var_3);
    #pragma endscop
}
