/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 7065649360729892612;
    var_12 *= (max(((((var_9 && 0) ? var_2 : ((min(0, var_1)))))), (min(var_2, var_10))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = ((-(arr_0 [i_0] [i_0])));
        arr_3 [i_0] [i_0] = -24;
    }
    var_14 = var_0;

    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_15 *= (max((-27789304 <= var_2), -var_8));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_16 = (65535 != var_4);

            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                var_17 = (~138);
                var_18 = ((!(-127 - 1)));
                arr_11 [i_1] [i_2] [i_3] = ((var_4 ? (arr_6 [i_3] [i_3] [i_3]) : 60291));

                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    arr_14 [i_1] [i_1] [i_3] = (arr_13 [12] [i_2] [i_3] [i_3]);
                    var_19 = (arr_6 [i_3] [i_2] [i_1]);
                    var_20 += var_1;
                }
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    arr_18 [i_3] [i_2] [i_3] [i_5] = (((arr_15 [i_3] [i_3]) ? (arr_10 [i_5] [i_3] [i_2] [i_1]) : 65535));
                    var_21 = (11288076885560215057 - -26020);
                    arr_19 [i_1] [i_2] [i_2] [i_3] [i_5] = 7;
                }
            }
            arr_20 [i_1] [12] = var_3;
            var_22 = (max(var_22, 24678));
            arr_21 [i_1] [i_1] |= 243;
        }
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_23 = arr_26 [i_6] [i_6] [i_7];
            var_24 += (var_9 - 47332);
            var_25 = ((~(arr_6 [i_7] [10] [i_6])));
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    {
                        var_26 = (min(var_26, ((((((0 ? (arr_13 [3] [i_8] [0] [i_10]) : (((arr_9 [i_10] [i_8] [i_6]) ? 11991668661874037380 : 87))))) ? (max((arr_8 [i_10]), (min(var_4, (arr_23 [i_6]))))) : (arr_15 [i_8] [i_10]))))));
                        var_27 += 1633144777;
                    }
                }
            }
        }
    }
    #pragma endscop
}
