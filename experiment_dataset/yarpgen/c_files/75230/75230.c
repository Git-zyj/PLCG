/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_2, (var_0 ^ var_14)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 -= (min((((arr_5 [i_0 - 1] [i_0]) ? ((max((arr_3 [i_0] [i_2] [i_2 - 4]), (arr_2 [i_0])))) : (arr_1 [i_0 - 2]))), (-26581 - 1)));
                    arr_7 [i_1] = ((var_0 > ((min(1, 29154)))));
                    var_21 |= ((((max((arr_0 [i_1]), 36376))) ? ((min(15768338959256434884, (arr_5 [i_0 - 1] [i_0 - 2])))) : (((!(arr_4 [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_1] [i_2 - 3] [i_1] [i_0] = (max((((11081344812101561873 && (arr_3 [i_0] [i_0 - 2] [i_0 + 1])))), (min(-46054, ((max(16173, (arr_11 [i_0] [i_1] [i_2 - 4] [i_3 + 1] [i_1] [i_4]))))))));
                                var_22 += (((((var_16 & (arr_8 [i_2] [i_2 - 3] [i_3] [i_3 + 1])))) ? (min(1, 16394543653100900924)) : ((((arr_8 [i_1] [i_2 - 3] [i_2 - 2] [i_3 + 1]) ? (arr_8 [i_2 - 1] [i_2 - 3] [i_3 + 1] [i_3 + 1]) : (arr_8 [i_0] [i_2 - 3] [i_2 - 2] [i_3 + 1]))))));
                            }
                        }
                    }
                    var_23 = ((~(((18191 < var_18) & (arr_3 [i_0 - 1] [i_1] [i_1])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            {
                var_24 *= (((6770444738835894243 ? ((min(var_6, (arr_3 [i_5] [i_5] [i_6])))) : ((-(arr_17 [i_6] [i_5]))))));
                var_25 ^= ((((min((arr_5 [i_6] [i_6]), ((((arr_17 [i_5] [i_6]) != (arr_17 [i_5] [i_5]))))))) ? (min(229, 1)) : (min((((arr_16 [i_6]) ? var_3 : var_12)), ((((arr_9 [i_5] [i_5] [i_5] [10]) != (arr_18 [i_5] [i_6] [i_6]))))))));
                arr_19 [i_6] = ((~(((arr_6 [i_5] [i_6] [i_5]) << (((arr_1 [i_5]) - 1415657211))))));
                arr_20 [i_6] [i_5] = (((min((~var_4), ((var_11 ? 2052200420608650691 : var_17)))) - ((((arr_0 [i_5]) % (1 != 18185))))));
            }
        }
    }
    var_26 = (max(var_7, (min(((var_0 ? var_15 : 11676299334873657374)), (((var_17 ? 14173 : var_5)))))));
    #pragma endscop
}
