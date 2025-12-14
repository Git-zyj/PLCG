/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= -4;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [i_1] [i_2] = ((-((~((-(arr_3 [i_1] [2])))))));
                    var_20 = (max(var_20, (((((((min((arr_5 [i_2]), -59878606)) + 2147483647)) << ((((~(arr_2 [i_0]))) - 926254852))))))));
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    arr_12 [i_0] [i_0] [i_3] = arr_10 [i_0] [i_0] [i_0 - 3];
                    arr_13 [i_0] [i_0] [i_3] [i_3] = (((arr_1 [4] [i_1]) ? (~9) : (!var_11)));
                    var_21 = (((min(((22208 ? 2 : (arr_1 [i_3] [i_0]))), ((var_4 ? 22208 : 89)))) <= (((~var_15) - (~114)))));
                    arr_14 [i_3] = ((+((min((arr_8 [i_3] [i_1 + 1] [i_0 - 2] [i_1 - 1]), 136)))));
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_6 = 2; i_6 < 10;i_6 += 1)
                            {
                                var_22 *= ((!(arr_16 [i_4 + 1] [i_5 + 3] [i_6 + 1] [i_6])));
                                arr_22 [2] [i_1] [i_4] [i_5] [i_5] [10] &= 114;
                                var_23 = 117;
                                var_24 = (max(var_24, ((((arr_9 [i_1] [i_1] [i_1]) ? (arr_0 [i_4]) : (((arr_6 [i_0] [i_1] [i_4]) - -592883031)))))));
                                var_25 = var_5;
                            }
                            for (int i_7 = 2; i_7 < 8;i_7 += 1)
                            {
                                var_26 += min((((arr_23 [i_5 + 2] [i_5 + 2] [i_5] [i_5] [i_5]) % (((arr_11 [10] [i_5] [i_1] [10]) ? (arr_20 [i_0] [i_1 - 1] [10] [i_5 - 1] [i_5] [i_7] [i_7]) : 528482304)))), (((~var_3) ? (arr_10 [i_1] [4] [i_7]) : ((((arr_4 [i_0] [i_0] [i_0] [i_0 - 1]) < 178))))));
                                var_27 = ((((min((arr_11 [i_5] [i_5] [i_5] [i_7]), 592883002)) <= 178)));
                            }
                            var_28 = ((arr_2 [i_5 + 1]) ? (min((arr_2 [i_5 + 2]), (arr_19 [i_0 + 2] [i_5] [i_4 - 1]))) : (max((arr_2 [i_5 - 1]), (arr_11 [i_5] [i_5] [i_5 - 1] [i_5 + 3]))));
                            var_29 = (max(var_29, (((-960408924 ? 88 : 65535)))));
                            var_30 = ((51 ? -592883045 : -592883045));
                        }
                    }
                }
                var_31 = (!var_16);
            }
        }
    }
    #pragma endscop
}
