/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_13 = (!1);
                            arr_10 [i_1] [i_1] [4] = min(((((arr_3 [i_0 - 1]) ? (arr_6 [i_0 - 1] [8] [i_1]) : (arr_3 [i_0 - 1])))), (arr_9 [i_0] [i_2 - 2] [i_0 + 2] [i_3]));
                        }
                    }
                }
                var_14 = (max(var_14, ((((((((arr_5 [i_1]) ? (arr_2 [i_0] [i_0]) : 65507)))) + (arr_7 [i_0] [i_0 - 1] [12]))))));

                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    var_15 = (arr_8 [i_0 + 1] [8] [i_0] [10] [i_0]);
                    var_16 = ((((((arr_3 [i_4]) == (arr_4 [i_1] [i_1]))) ? ((((arr_9 [i_0] [i_1] [i_4] [i_4]) == 65535))) : (arr_6 [i_1] [i_1] [i_1]))));
                }
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_17 = (arr_16 [i_7] [i_0 + 2] [i_1] [i_0 + 2]);
                                arr_19 [13] [i_1] [i_1] [19] [i_0] [i_1] = (arr_9 [16] [10] [8] [i_6]);
                                arr_20 [i_7] [i_6] [i_6] [i_0] &= ((((((!17403370664320446982) - -32747))) ? (arr_6 [i_7 + 3] [i_0 - 1] [i_6]) : (arr_12 [i_6] [i_6] [i_6])));
                                var_18 = (arr_11 [i_5]);
                            }
                        }
                    }
                    var_19 = (min((arr_7 [i_5] [i_1] [i_0]), (((13068 != (arr_0 [i_0]))))));
                }
                for (int i_8 = 2; i_8 < 19;i_8 += 1)
                {
                    var_20 = (~65530);
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            {
                                arr_32 [i_1] [i_9] [i_8 - 1] [19] [i_1] = 65530;
                                var_21 = ((-(arr_31 [i_0 + 1] [i_0 - 1] [i_8 - 1] [i_8 - 2] [i_9 - 1])));
                                var_22 = ((((~(247 >> 0))) & (((((!(arr_8 [i_10] [i_10] [i_10] [i_10] [i_10]))) || ((0 && (arr_29 [i_1] [i_1]))))))));
                                var_23 = (arr_23 [i_0 + 1]);
                            }
                        }
                    }
                    var_24 = (arr_28 [i_8] [18] [i_1] [16] [18]);
                }
            }
        }
    }
    var_25 -= ((((min(var_8, (var_12 != var_5)))) ? ((max((!var_10), (var_0 == var_12)))) : ((max(228, 62)))));
    #pragma endscop
}
