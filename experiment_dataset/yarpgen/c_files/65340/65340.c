/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -8460;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_18 *= (((arr_6 [i_3] [i_2] [i_1] [i_0]) ? ((((((arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) >> (((arr_2 [i_4] [i_2]) - 65)))) | 6486937370775809267))) : -549106945));
                                var_19 ^= (arr_12 [i_1] [i_0] [i_1] [i_1] [i_3] [i_4]);
                                arr_14 [i_0] [i_1] [14] [i_2] [i_4] = ((max((arr_5 [i_3 + 2] [i_3 - 1] [i_3 + 1] [i_3 - 1]), ((var_2 ? (arr_12 [i_2] [i_2] [i_2] [i_0] [i_4] [4]) : 9223372036854775807)))));
                                arr_15 [i_0] [i_2] = ((((min((arr_4 [i_3 - 1]), (((6929992056209667266 ? var_16 : 46401)))))) ? (arr_5 [i_0] [16] [i_2] [i_2]) : ((((arr_2 [i_0] [i_3 - 1]) ? (arr_2 [i_0] [i_3 + 1]) : (arr_2 [i_1] [i_3 + 2]))))));
                            }
                        }
                    }
                    var_20 = (max(6486937370775809251, 1674837227));
                    arr_16 [i_2] [i_2] = ((0 <= (((arr_9 [i_0] [i_1] [i_1] [2] [8]) ? 6929992056209667266 : 1384920462))));
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    arr_19 [i_0] [i_0] = ((((26212 ^ 0) ? ((((arr_2 [i_1] [i_0]) != var_10))) : (arr_8 [i_0] [i_1] [i_1] [i_0]))));
                    var_21 *= ((+(((var_5 ? (arr_1 [i_0]) : var_7)))));
                }
                var_22 *= ((!(((((max(var_7, var_10))) ? (((var_10 ? (arr_12 [i_0] [i_1] [i_1] [i_0] [i_1] [i_0]) : (arr_18 [i_0] [i_0] [i_1] [i_1])))) : ((var_16 ? var_11 : (arr_5 [i_0] [i_0] [i_1] [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
