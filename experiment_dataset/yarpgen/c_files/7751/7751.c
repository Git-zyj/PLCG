/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;
    var_20 = ((((!(12288 || var_17))) ? (((!(var_14 && -122)))) : var_5));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = ((((1 << (((arr_2 [i_0] [6]) + 385817789)))) / var_17));
        arr_3 [i_0] = ((((6866256482224612138 << (var_12 - 10792))) / 1));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_22 &= var_1;
                    var_23 = (((var_6 ? var_2 : -889595506)));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                    {
                        var_24 = (min(var_24, ((((65535 % 4790) ? -127 : -889595506)))));
                        var_25 = (arr_5 [i_0]);
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                    {
                        var_26 = ((-1443349816 + 2147483647) >> (-26070 + 26070));
                        var_27 = ((889595506 ? 29221 : 147));
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_2] [9] = 889595518;
                        arr_18 [i_0] = (((arr_5 [i_2 - 1]) != (arr_5 [i_2 + 2])));
                        var_28 = (max(var_28, var_1));
                    }
                }
            }
        }
    }
    var_29 = ((-(-var_0 + var_13)));
    #pragma endscop
}
