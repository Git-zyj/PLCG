/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 24;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_9 [i_1] [i_1] [21] [i_3] [21] = (((((arr_4 [i_2 - 3] [i_2 - 2] [i_2 + 1]) + 2147483647)) >> (((arr_4 [i_2 - 2] [i_2 - 3] [i_2 - 2]) + 793629962))));
                        var_20 = (max(var_20, (((((var_12 << (((arr_6 [i_0] [i_0] [i_0] [i_0]) + 73)))) == var_7)))));
                        var_21 = (((2092055827 / 1) * var_7));
                    }
                    var_22 = ((-(((arr_7 [i_1]) ? var_7 : var_11))));
                    var_23 = (max(var_23, (((!((-9212935927177536274 == (arr_7 [1]))))))));
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_24 = (max(var_24, -44));
                    var_25 = ((1 ? (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_4]))) : 1));
                    var_26 = 1;
                    arr_12 [i_0] [i_1] [i_1] = (arr_8 [i_1]);

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        arr_15 [i_0] [i_1] [i_1] [i_1] [i_4] [i_5] = (arr_0 [i_0]);
                        var_27 = 4294967295;
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        arr_18 [i_0] [i_1] [i_1] [i_0] = (~var_8);
                        var_28 = (max(var_28, -31471));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        var_29 = (((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_1])));
                        arr_23 [i_1] = (4294967273 % var_12);
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        arr_26 [i_1] [i_8] [i_8] [i_1] = ((~(arr_11 [i_8] [i_1] [i_0])));
                        var_30 |= ((!(((arr_1 [i_0]) != (((!(arr_8 [20]))))))));
                    }
                }
                arr_27 [i_1] = (1 || -73790607);
            }
        }
    }
    var_31 = (82 > 65535);
    #pragma endscop
}
