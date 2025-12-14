/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_2;
    var_13 = ((65535 <= (((!((max(22, var_7))))))));
    var_14 *= ((!((((min(-6, 18))) || ((min(var_7, 1385985993)))))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0 - 1] = (max(var_1, ((-((min(10, (arr_0 [i_0 - 1]))))))));
        arr_3 [8] = ((((var_11 ? (arr_1 [i_0 - 2] [i_0]) : -22)) >= var_1));
        arr_4 [i_0] [i_0 - 2] = ((((!(!var_3)))));
        var_15 = ((var_7 < (var_5 & var_2)));
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1 + 2] = ((var_6 ? (~-10) : ((var_4 ? ((241 & (arr_5 [i_1]))) : ((max((arr_1 [8] [17]), var_10)))))));
        var_16 = (~-255);
        var_17 = (min(((((arr_6 [i_1 - 1]) && 1))), (arr_1 [i_1 + 1] [i_1 - 1])));
    }
    for (int i_2 = 1; i_2 < 8;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        arr_20 [i_3] [i_3] = var_9;
                        var_18 = (min(var_18, ((max(var_5, (min((255 >= var_0), var_0)))))));
                        var_19 = (arr_17 [i_2] [1] [i_3] [1] [i_5]);
                    }
                }
            }
        }
        var_20 = arr_5 [i_2 - 1];

        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            arr_25 [i_6] [i_2] [i_2] = ((!(((((min(var_3, (arr_17 [i_2 + 1] [i_2 + 1] [i_2 + 3] [i_2 + 1] [i_2 + 1])))) ? (var_5 - 1015780488) : ((64 ? var_11 : var_7)))))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    {
                        var_21 = ((((arr_10 [i_2 - 1] [i_2 + 4] [i_2 + 2]) ^ -112)));
                        var_22 -= 23;
                        arr_30 [i_6] = (min((((max(var_10, var_7)) ^ var_2)), -64));
                        var_23 &= max(((((arr_23 [i_2 + 1]) < var_1))), 249);
                        arr_31 [i_7] [2] [i_2] = max((((!(arr_28 [i_2 + 3])))), ((~(var_8 || var_8))));
                    }
                }
            }

            /* vectorizable */
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                var_24 -= 1;
                var_25 = var_1;
            }
            var_26 = (min(var_26, ((((max((arr_21 [10] [10] [i_2 + 2]), (255 != var_10))) <= (((var_2 ? ((min(242, 168))) : (arr_9 [i_2])))))))));
        }
        for (int i_10 = 2; i_10 < 9;i_10 += 1)
        {
            arr_37 [i_10] = ((~(!51476)));
            arr_38 [i_10] [i_10] [i_10] = ((!((max((arr_24 [i_2] [i_2 + 4] [i_10 - 2]), -var_1)))));
        }
        var_27 |= ((var_10 < ((max(2040, (arr_18 [2] [2] [2]))))));
        arr_39 [10] [i_2 + 4] = (0 / var_8);
    }
    #pragma endscop
}
