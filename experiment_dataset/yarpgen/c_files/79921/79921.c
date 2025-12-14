/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = (min(var_13, ((((((1575173608574597742 ? var_1 : (arr_1 [i_0 - 1] [i_0 - 2])))) ? (((arr_4 [i_1]) ? var_11 : 544860411)) : (((arr_4 [i_0 - 1]) * (arr_4 [i_1]))))))));
                arr_5 [i_1] [2] [i_0] = ((1575173608574597742 ? 0 : 544860403));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_14 = (min(var_14, (arr_7 [i_1])));

                            for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_2] [i_3] [i_4] [i_2] = ((-((-(arr_7 [i_0 - 3])))));
                                var_15 ^= ((((-(arr_2 [i_0] [i_0] [i_0])))) ? ((((arr_3 [i_2] [i_2 + 1] [i_2]) >= (arr_3 [i_1] [i_2 + 1] [i_2 + 1])))) : ((213 ? (arr_2 [i_2] [i_2] [i_2 - 1]) : var_12)));
                            }
                            for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                            {
                                var_16 = ((-1575173608574597750 % ((-31 ? (min(16871570465134953876, 9150664753198595168)) : ((((arr_1 [i_5] [i_0]) ? 1 : (arr_0 [i_2 + 1]))))))));
                                arr_17 [i_2] [i_5] [i_5] [i_3] [i_5] = (--18446744073709551601);
                            }
                            var_17 &= ((var_8 ? (min((arr_4 [i_0 - 3]), 1575173608574597750)) : var_10));
                        }
                    }
                }
                var_18 = (min(var_18, var_9));
            }
        }
    }
    var_19 = ((-544860411 ? 1575173608574597739 : 16871570465134953864));
    var_20 = var_6;
    var_21 ^= var_8;
    var_22 -= (min(var_8, var_4));
    #pragma endscop
}
