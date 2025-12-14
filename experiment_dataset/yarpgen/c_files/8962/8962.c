/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_10 = (((((((6115 ? var_9 : var_5))) & (((arr_1 [i_0]) ? 32745 : (arr_1 [i_0]))))) > (((min(var_3, -22485))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_2] = ((!((!(arr_2 [i_1 - 1] [i_1] [i_2])))));
                    arr_7 [i_0] [i_0] = (min(0, (min(-1, (arr_5 [i_1 + 1] [i_1 + 1] [i_1 - 2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_11 = ((arr_10 [i_2] [14] [i_3 - 2] [i_4] [14] [i_4]) ? ((0 ? (arr_10 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3] [i_3] [i_3]) : (arr_10 [i_0] [i_1] [i_3 - 1] [i_3 - 1] [i_3] [16]))) : (((arr_10 [i_0] [i_0] [i_3 + 1] [i_3] [i_3 + 1] [i_4]) ? -27244 : 18446744073709551615)));
                                arr_13 [i_4] [i_3 - 2] [i_2] [i_1] [i_0] = ((172 ? 0 : (((arr_8 [i_4]) + (-127 - 1)))));
                            }
                        }
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            arr_17 [i_0] [i_0] [i_0] = (max(1, -32746));
            arr_18 [i_0] = (min((-127 - 1), (((var_8 < (arr_10 [i_0] [14] [i_0] [i_0] [i_0] [i_0]))))));
        }
        for (int i_6 = 4; i_6 < 16;i_6 += 1)
        {
            var_12 = (min(var_12, (((var_6 ? 120 : (((arr_2 [i_0] [i_6 + 2] [16]) - (arr_2 [i_6 + 2] [i_6 - 1] [i_6]))))))));
            var_13 &= -8058;
        }
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            arr_25 [i_0] = 75;
            arr_26 [i_0] [i_0] [i_7] = var_8;
        }
        arr_27 [i_0] = (min(((54043195528445952 ? 1099511627264 : 9085)), ((((((23 ? var_1 : (arr_11 [i_0] [i_0])))) ? 2051819855 : (~117))))));
    }
    var_14 = -2051819855;
    var_15 = ((((((((var_8 ? 117 : 136))) ? var_1 : 1))) ? -1 : var_4));
    #pragma endscop
}
