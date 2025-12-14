/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_18 = ((((((((arr_10 [i_1] [i_2]) ? (arr_9 [i_0] [i_1] [i_2 - 3] [i_2 + 1]) : var_12)) | var_9))) ? (2490203535620227726 / 9016) : 9016));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_19 = min(var_12, (!1));
                                var_20 ^= ((min(-9016, (arr_3 [i_1 + 2] [i_2 - 2]))));
                                var_21 -= var_6;
                                arr_17 [i_0] [i_1] [i_2] [i_0] [i_2] [i_2] = ((0 ? 1 : 9860500154272002251));
                            }
                        }
                    }
                    var_22 = (((((~((var_6 ? var_1 : 61477))))) ? (((((1 - (arr_11 [i_2 + 1] [i_1] [i_0] [i_1] [i_0] [i_0])))) ? ((0 + (arr_9 [i_0] [i_1] [i_1 + 2] [i_2]))) : (((7948648747667653007 ? 254 : 1))))) : (((var_3 << (((arr_9 [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1]) - 55820)))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_24 [i_0] [i_0] [i_0] [i_0] [i_2] = (-1273405066 ? 0 : 1);
                                var_23 = (i_2 % 2 == 0) ? ((((((((arr_13 [i_1] [i_2] [i_5] [i_6]) + 9223372036854775807)) >> (((!(arr_12 [i_6] [i_1] [i_1] [i_0])))))) & (((((((9860500154272002251 ? var_2 : var_3)) + 2147483647)) << ((((var_17 ? var_7 : (arr_3 [i_2] [i_2]))) + 5081656908026054126)))))))) : ((((((((((arr_13 [i_1] [i_2] [i_5] [i_6]) - 9223372036854775807)) + 9223372036854775807)) >> (((!(arr_12 [i_6] [i_1] [i_1] [i_0])))))) & (((((((9860500154272002251 ? var_2 : var_3)) + 2147483647)) << ((((var_17 ? var_7 : (arr_3 [i_2] [i_2]))) + 5081656908026054126))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = ((9860500154272002251 ? (((((var_1 ? 65530 : 119))) ? var_8 : (((min(23, 9003)))))) : var_2));
    #pragma endscop
}
