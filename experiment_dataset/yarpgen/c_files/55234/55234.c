/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = (arr_0 [14] [i_0]);
        var_21 = (min(var_21, (((-(arr_0 [i_0] [i_0]))))));
        var_22 = (max(var_22, 52473));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_23 = (min(var_23, ((((arr_4 [i_1]) <= ((((arr_4 [i_1]) ? (arr_4 [i_1]) : 52473))))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_12 [i_2] [i_2] [i_3] [i_4] = ((((arr_8 [i_1] [i_2] [i_3]) ? (min(-24, (arr_4 [i_1]))) : (arr_8 [i_1] [i_2] [i_4]))) > ((((!(((var_1 & (arr_5 [i_2])))))))));

                        for (int i_5 = 2; i_5 < 19;i_5 += 1)
                        {
                            arr_17 [i_1] [i_2] = max(((~((min(0, (arr_16 [i_1] [i_2] [i_3] [i_2] [i_5])))))), (arr_9 [i_5 + 1] [i_5 + 1] [i_2] [i_5 - 1] [i_5 - 2]));
                            var_24 -= (((((var_11 - (arr_7 [i_1] [i_1] [10] [i_4])))) | ((~(arr_7 [i_1] [i_2] [i_5 + 1] [i_4])))));
                            var_25 = (min(13063, 1));
                            var_26 = ((((((var_3 & (arr_3 [i_1]))) != (((arr_4 [i_1]) ? (arr_16 [18] [18] [3] [i_2] [i_5]) : var_12)))) ? (~52473) : ((-((max(127, 13063)))))));
                        }
                        arr_18 [i_2] [i_2] = (((((-1563475834 * (((arr_8 [i_1] [i_2] [i_3]) * (arr_7 [i_2] [i_2] [i_3] [i_4])))))) ? ((((-(arr_3 [i_1]))) | -var_7)) : (((arr_13 [i_2] [8] [i_4] [i_4] [8] [19]) ? (arr_4 [i_1]) : 64609))));
                        var_27 = var_18;
                    }
                }
            }
        }
        var_28 = (min(var_28, -5414));
        var_29 = ((((arr_2 [i_1] [i_1]) ? (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_2 [i_1] [i_1]))));
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
    {
        var_30 = (((~var_12) ? ((-(var_7 & var_2))) : var_12));
        var_31 = ((!((!(arr_14 [i_6] [i_6] [i_6] [i_6] [i_6])))));
        arr_21 [i_6] [i_6] &= (((min(var_13, (arr_16 [i_6] [i_6] [i_6] [i_6] [i_6]))) | (arr_14 [i_6] [i_6] [i_6] [i_6] [i_6])));
    }
    var_32 = max(var_11, var_16);
    var_33 = ((((min((!13063), ((7112 ? var_5 : 0))))) ? 240 : ((((52459 ? var_0 : -24))))));
    var_34 ^= ((var_3 ? ((65280 ? 52429 : (!4294967295))) : ((var_12 ^ (~var_7)))));
    var_35 |= var_14;
    #pragma endscop
}
