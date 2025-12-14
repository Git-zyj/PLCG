/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= -var_1;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [19] [i_0 - 3] [19] [9] [17] = (arr_7 [i_3 + 1] [i_2] [i_0 - 3]);
                            var_21 = (min((!118), (arr_4 [i_2 + 1] [i_2 - 1] [i_2])));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                            {
                                var_22 = (max(var_22, ((((var_14 ? var_12 : (arr_9 [i_0 - 1] [i_2 + 1] [i_4] [13])))))));
                                var_23 = var_17;
                                var_24 = (max(var_24, ((((((!(((-121 ? 90 : -73)))))) * ((((arr_6 [i_0 - 3] [i_3 + 1] [i_0 - 3] [i_4]) < (((arr_0 [3]) ? 188 : (arr_9 [8] [8] [i_2 - 1] [i_2])))))))))));
                                var_25 = (77 ? var_14 : (73 & 66));
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                            {
                                var_26 = (arr_9 [i_1] [i_2] [10] [i_2]);
                                var_27 &= (arr_2 [i_3 - 1]);
                            }
                        }
                    }
                }
                var_28 = (((963078839 ? -108 : (arr_6 [i_0] [13] [i_1] [6]))));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 19;i_7 += 1)
                    {
                        {
                            var_29 = (min(var_29, ((((arr_8 [i_6 + 2] [i_7 - 2] [i_6 + 2] [i_1]) ? ((17 ? 25642 : 27443)) : (max((arr_8 [i_7 + 2] [i_7 - 2] [i_6 + 2] [i_0]), 121)))))));
                            var_30 *= (min(-20, (((arr_1 [i_6 + 1]) ? (arr_1 [i_6 - 1]) : (arr_1 [i_6 + 1])))));
                        }
                    }
                }
                var_31 = (max(var_31, (((+((min((arr_11 [0] [i_0 - 2] [i_0 - 1] [8] [i_0 - 3] [15] [i_0 - 1]), (arr_9 [6] [i_0 - 2] [i_0 - 2] [i_0 - 2])))))))));
                var_32 += (arr_16 [1] [18] [i_0 - 1]);
            }
        }
    }
    #pragma endscop
}
