/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(75, ((var_6 ? var_4 : var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_13 ^= 4294967292;

                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    var_14 |= ((min((max(-8192, 1345963639)), (arr_4 [i_2] [i_2] [i_2 + 1]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_15 -= ((!(arr_13 [i_1] [i_1 - 4] [i_1] [i_1] [i_2 + 1])));
                                var_16 = (max((~var_9), (27165 < var_11)));
                            }
                        }
                    }
                    var_17 = var_3;
                }
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_18 ^= (((((((arr_8 [i_7] [16] [i_0]) ? 29140 : var_1))) ? ((50372 ? 15508588283490686021 : var_6)) : 163)) < var_11);
                                var_19 = (arr_6 [i_1] [i_1] [i_1 + 4]);
                                arr_25 [5] [12] [i_5] [i_6] [2] [2] = (((1903228451687469736 ? 21054 : 119)));
                                var_20 *= (((!32767) | 21069));
                                arr_26 [i_0] [7] = var_10;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            {
                                arr_33 [i_0] [i_1] [i_5] [i_1] [i_8] [14] = (max((arr_20 [i_1] [18] [1] [18] [1] [i_8 + 2]), ((-(arr_5 [i_0] [i_1 - 1] [i_0] [i_0])))));
                                var_21 = ((var_7 ? var_6 : ((var_7 ? var_7 : var_4))));
                            }
                        }
                    }
                    var_22 ^= (((((-(arr_14 [i_5 - 1])))) ? var_2 : (arr_12 [i_5])));
                    var_23 ^= (((min(var_1, (arr_32 [i_0] [i_0] [i_0] [i_0] [i_0]))) ^ ((((min(4294967284, -1903228451687469737)) | (~-1685097004877517835))))));
                }
                arr_34 [i_0] [i_0] = ((1 << (((((((var_8 ? (arr_9 [i_1] [i_1]) : var_8))) ? (arr_32 [i_1] [i_1] [14] [18] [18]) : ((max((arr_27 [16] [i_0] [3] [i_0]), var_8))))) - 8987))));
            }
        }
    }
    #pragma endscop
}
