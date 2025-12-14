/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = 4615;
        arr_4 [14] = min(((min((arr_0 [i_0] [i_0]), 4615))), 229);
        arr_5 [i_0] = ((min(5298, -1586971658)));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_11 [11] [i_1] [19] = (((arr_8 [i_0] [i_0] [i_0]) ? (((((min(var_2, var_1))) ? ((~(-32767 - 1))) : (((arr_2 [i_2]) ? var_6 : 20751))))) : ((((((arr_9 [i_1] [i_1] [i_1]) ? 36 : 1651850947))) ? (min(15019215659761740572, 3686)) : (arr_8 [i_1 - 1] [i_0] [i_2 + 2])))));
                    arr_12 [i_0] [i_1] [i_2] [i_0] = (arr_7 [i_0]);
                    arr_13 [14] [0] [i_2] |= (min(var_7, ((((arr_0 [i_0] [i_1 - 4]) ? (arr_7 [i_1]) : (arr_8 [i_0] [i_1 + 1] [i_2 - 1]))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_18 [i_1] = ((var_9 + 3686) ? (arr_14 [i_2] [i_2] [10] [i_2] [i_2 + 2] [i_2]) : ((var_8 ? 949568339 : var_1)));
                        arr_19 [4] [4] [i_2] [i_2] [4] [i_0] = (!16786);
                        arr_20 [i_0] [i_1] [i_0] [16] = ((var_9 ? var_8 : (arr_8 [i_0] [i_0] [i_0])));
                        arr_21 [0] [i_1] [i_2] [i_3] [i_0] &= -8993459613726781602;
                        arr_22 [i_0] [i_1] [i_3] = -110;
                    }
                    for (int i_4 = 4; i_4 < 18;i_4 += 1)
                    {
                        arr_27 [6] [i_2] = (max(127, -4598));
                        arr_28 [i_0] [i_1] [4] [i_1] [i_4] = ((-(((!(arr_8 [i_1 + 1] [i_1] [i_1]))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        arr_33 [i_5] [i_5] = var_10;
        arr_34 [i_5] = ((-9087060680415581517 ? ((var_5 >> (60237 - 60176))) : (arr_2 [i_5])));
        arr_35 [i_5] = var_0;
        arr_36 [0] [i_5] = (var_2 > var_8);
    }
    var_11 = var_1;
    var_12 = var_6;
    #pragma endscop
}
