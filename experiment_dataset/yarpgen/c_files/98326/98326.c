/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_14 = ((!(((-(arr_11 [i_4]))))));
                                arr_13 [1] [1] [4] [2] [i_3] [i_3] [i_4] = ((((((!33519) % 4294967295))) || ((min((((arr_6 [i_0]) ? var_5 : (-2147483647 - 1))), var_2)))));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_15 = (max(var_15, (((((((65522 ? (arr_0 [9]) : var_3)))) >= (((arr_1 [i_0] [i_0]) + (arr_1 [i_0] [i_5]))))))));
                    var_16 = ((-((((min(var_1, (arr_8 [i_0])))) ? 2147483641 : (arr_0 [i_1])))));

                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {
                        arr_19 [1] [i_5] [5] [10] = (arr_8 [i_6 + 1]);
                        arr_20 [i_6] [i_5] [i_5] [i_0] = (((var_4 >> (2147483647 - 2147483644))));
                        var_17 = ((!((!(arr_8 [i_6 - 2])))));
                    }
                    var_18 = (!65511);
                    arr_21 [i_0] [i_5] [i_5] [i_5] = ((~(arr_7 [i_5] [1] [i_1] [i_1] [11])));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    arr_24 [i_0] [i_0] [i_0] [i_1] = var_7;
                    var_19 = (7049310378381308609 ? ((384 ? 4461 : (-9223372036854775807 - 1))) : 13);
                    var_20 = (min(var_20, (~5979370520682768750)));
                    var_21 = (arr_2 [11] [12]);
                }
            }
        }
    }
    var_22 = (max(var_7, (~var_9)));
    var_23 = 384;
    #pragma endscop
}
