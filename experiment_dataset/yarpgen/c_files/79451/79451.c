/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= (min(var_8, ((var_2 ? (((var_2 ? var_6 : 103604460))) : (0 - 18446744073709551604)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_11 = (((((min(var_0, (arr_2 [i_0]))))) && (((arr_0 [17]) == (arr_0 [i_0])))));
        arr_4 [i_0] = ((var_8 | (max((arr_0 [i_0]), ((var_8 >> (18446744073709551604 - 18446744073709551586)))))));
        var_12 = var_7;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = (var_0 % (arr_7 [i_1]));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_1] [i_3] [18] = (((((8544040606831726318 ? (arr_7 [i_1]) : (arr_5 [i_1]))) > var_9)));
                    var_13 -= (~var_3);

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        var_14 *= 123;

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_15 = (max(var_15, ((((arr_3 [i_5]) ? (arr_3 [i_1]) : (arr_6 [i_1] [i_3]))))));
                            var_16 = (((arr_15 [0] [i_3] [i_3] [i_4 + 1] [0] [i_3]) / (arr_15 [i_1] [i_2] [i_2] [i_4 + 1] [i_5] [i_3])));
                            var_17 = ((((156 > (arr_0 [i_5])))) == (~0));
                            var_18 *= (!0);
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_19 = (0 >> 0);
                            var_20 = -1406676809;
                            var_21 = (max(var_21, var_9));
                            var_22 = (min(var_22, (arr_3 [i_4 + 1])));
                            var_23 *= (arr_3 [i_1]);
                        }
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        arr_23 [i_3] [i_3] = (max((min(1, (arr_6 [i_7] [i_3]))), ((((arr_17 [i_1] [4] [i_3] [i_7] [i_2] [i_3]) < (arr_17 [i_7] [i_7] [i_3] [i_2] [i_2] [i_1]))))));
                        var_24 = 58739;
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
    {
        var_25 -= (((arr_26 [i_8]) ? ((((((arr_27 [i_8]) ? var_4 : (arr_17 [i_8] [i_8] [13] [i_8] [i_8] [i_8])))) ? (-26821 / 1406676809) : (arr_3 [i_8]))) : (arr_17 [i_8] [8] [i_8] [i_8] [i_8] [i_8])));
        arr_28 [6] = var_6;
    }
    #pragma endscop
}
