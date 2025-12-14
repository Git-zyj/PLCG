/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0 + 1] = (arr_0 [i_0] [6]);
        var_17 = (max((min((arr_0 [i_0 - 2] [i_0 + 1]), (arr_1 [i_0 + 2]))), (((arr_0 [i_0 - 1] [i_0 - 2]) | (arr_1 [i_0 + 1])))));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        arr_7 [i_1] = (arr_3 [i_1]);
        arr_8 [i_1] [i_1] = (0 > 119);
        arr_9 [i_1] = ((((((min(var_14, 65535))) ? ((-(arr_5 [i_1]))) : (max((arr_5 [i_1 + 1]), var_12)))) > (min((max(var_10, (arr_5 [i_1 + 2]))), (arr_4 [i_1 + 2])))));
    }
    var_18 = (!3990940107);
    var_19 = min(var_11, (max(var_5, ((min(var_11, var_4))))));

    for (int i_2 = 2; i_2 < 10;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            var_20 = (arr_10 [i_2 + 4]);
            arr_16 [i_2] [i_3] [i_3] |= var_14;
            arr_17 [i_3] = (max(((var_5 ? -var_9 : (arr_12 [i_2] [i_3 + 1]))), ((((-127 - 1) <= (arr_3 [i_2 + 2]))))));
            arr_18 [i_3] [i_2] [i_3] = var_15;
            arr_19 [i_3] = (arr_11 [i_2] [i_2]);
        }
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 13;i_6 += 1)
                {
                    {
                        var_21 *= var_7;
                        var_22 = ((-(arr_11 [i_2 - 2] [i_6 - 2])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 10;i_7 += 1) /* same iter space */
    {
        arr_30 [i_7] = (arr_23 [i_7 - 2] [i_7 - 2]);

        for (int i_8 = 1; i_8 < 12;i_8 += 1) /* same iter space */
        {
            var_23 -= var_1;
            var_24 = 3990940086;
        }
        for (int i_9 = 1; i_9 < 12;i_9 += 1) /* same iter space */
        {
            var_25 = (max(var_25, (1916581664102910976 > 1)));
            arr_37 [i_7] [i_9] = (arr_29 [i_7 - 1]);
            arr_38 [10] [i_9] = ((!(8774700010993895714 * 9218040588185343041)));
            var_26 = -5993;
        }
    }
    var_27 = var_15;
    #pragma endscop
}
