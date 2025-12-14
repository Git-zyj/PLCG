/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_10 *= ((+(max((arr_7 [i_1] [i_1] [i_2] [i_3] [i_4]), (max((arr_7 [i_0] [i_0] [i_0] [i_4] [i_0]), 4467570830351532032))))));
                                arr_11 [i_0] [i_0] [i_2] [i_3] [i_4] = (max(2147483640, (arr_10 [i_4] [i_0] [i_2] [i_0])));
                            }
                        }
                    }
                }
                var_11 = (arr_2 [i_0]);

                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    arr_15 [i_0] [i_1] [i_1] [i_1] = (((((-(arr_13 [i_0] [i_0] [i_5])))) ? 4467570830351532032 : 13979173243358019586));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_12 = (max(((((((13208983864357497757 ? -3004 : 131))) ? 22485 : -32))), (+-18446744073709551615)));
                                arr_21 [i_0] = 2147483647;
                                arr_22 [i_0] [i_0] [i_5] [i_0] [i_7] = ((((min((arr_6 [i_0]), ((max(var_8, (arr_20 [i_0] [i_1] [i_5] [i_6] [i_7]))))))) || (((((var_4 || (arr_3 [i_0]))))))));
                                var_13 = 4467570830351532023;
                                var_14 *= ((((-1 ? (arr_17 [8] [i_1] [8] [8]) : (arr_17 [2] [i_5] [i_1] [2]))) ^ var_5));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        {
                            var_15 -= (min((((((~(arr_9 [i_0])))) ? 37202 : (arr_5 [i_0] [i_1] [i_8] [i_9]))), ((((1042729124785273930 ^ 54) || (arr_1 [i_9]))))));
                            var_16 = ((255 ? 4292526970201730015 : ((((arr_27 [i_9] [i_9] [i_1] [i_1] [i_1] [i_0]) + (((arr_19 [i_0] [i_0] [i_1] [i_0] [i_9]) * (arr_3 [i_0]))))))));
                            var_17 = ((+(((((((arr_26 [i_8]) ? var_5 : var_4))) && (((arr_25 [i_0] [i_0] [i_8]) != (arr_14 [i_0] [i_9]))))))));
                        }
                    }
                }
            }
        }
    }
    var_18 = (23026 || -42026667);
    /* LoopNest 3 */
    for (int i_10 = 3; i_10 < 8;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 6;i_12 += 1)
            {
                {
                    var_19 -= (42510 ? 143 : -26845);
                    var_20 = (max(var_20, ((max(2833730406405075619, (((arr_25 [16] [i_11] [16]) - -15613013667304476004)))))));
                }
            }
        }
    }
    #pragma endscop
}
