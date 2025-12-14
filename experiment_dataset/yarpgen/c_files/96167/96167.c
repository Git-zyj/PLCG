/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 = ((arr_3 [i_0 - 2] [i_1]) - var_8);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_18 -= ((((min((~var_7), (~var_2)))) ? (min(((max(0, 11487))), (arr_3 [0] [20]))) : (arr_11 [i_0] [10] [i_1] [i_2] [4] [i_4 - 1])));
                                var_19 = (max(var_19, ((((arr_3 [i_0 + 1] [6]) << ((((-525307399 ? (((arr_11 [1] [1] [18] [i_3] [2] [i_2 + 1]) ? var_3 : var_9)) : var_2)) - 72)))))));
                                var_20 = ((-(((arr_4 [1] [i_1 + 2] [i_1]) ? (arr_4 [i_0] [i_1 + 1] [i_1]) : (arr_4 [i_1 + 3] [i_1 + 2] [i_1])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_21 *= ((((min(var_10, (arr_12 [i_5] [i_1] [i_1] [i_1] [6])))) && (arr_2 [10])));
                                arr_21 [6] [12] [i_1] [18] [6] [i_5] [i_1] = (12120 << 0);
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (~var_9);
    var_23 = var_10;
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                {
                    var_24 += (max((((((54024 ? var_15 : 4294967276))) ? -1 : 15393162788864)), var_12));
                    var_25 -= (max(55275, (max(var_13, (arr_7 [1] [i_8 - 1] [i_8 - 1] [i_8 + 1])))));
                }
            }
        }
    }
    #pragma endscop
}
