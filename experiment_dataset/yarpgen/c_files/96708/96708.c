/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_17 = (((arr_4 [i_0] [i_2 + 1] [i_0]) | var_14));
                    var_18 += ((arr_2 [i_0] [i_2]) ? ((((arr_2 [i_0] [i_0]) ? var_4 : var_0))) : (((arr_2 [i_1] [i_2]) ? 6367227093346654829 : var_5)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_19 = ((((1 ? -32 : 6367227093346654829))) ? ((((arr_6 [i_0] [i_5]) ^ (arr_1 [i_0] [i_0])))) : (~12079516980362896773));
                        var_20 += ((21554 ? 15 : (arr_4 [i_0] [i_0] [i_4])));
                    }

                    for (int i_6 = 1; i_6 < 8;i_6 += 1)
                    {
                        var_21 = 16648888681032448755;

                        for (int i_7 = 2; i_7 < 9;i_7 += 1) /* same iter space */
                        {
                            var_22 = (max(var_22, ((((20 ? -13 : 5))))));
                            var_23 = (((arr_5 [i_6 + 1] [i_6] [i_6 + 2]) > (arr_15 [i_6 + 4] [i_6 + 2] [i_7 + 3] [i_7 + 1])));
                            var_24 = (arr_10 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 3]);
                        }
                        for (int i_8 = 2; i_8 < 9;i_8 += 1) /* same iter space */
                        {
                            var_25 = 9595631068950923877;
                            var_26 = (-13 - var_10);
                            arr_22 [i_6] [i_0] [i_3] [i_4] [i_6] [i_8] [i_8] = (!(arr_10 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 + 1]));
                            var_27 *= ((((arr_20 [i_4] [i_4]) && 23)));
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_28 = 22499;
                            arr_26 [i_0] [i_6] [i_0] [i_0] [i_0] [i_0] [4] = (arr_11 [i_0] [i_0]);
                            var_29 = (min(var_29, (arr_6 [i_3] [i_9])));
                        }
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            var_30 = ((!(arr_9 [10] [i_3] [11] [i_6])));
                            arr_30 [i_6] = (arr_8 [i_6] [i_0]);
                            var_31 = arr_20 [i_0] [i_6 + 3];
                        }
                        arr_31 [i_6] = (arr_25 [i_6] [i_6 + 4] [i_6 + 4] [i_6] [i_6 + 3] [i_6] [i_6 + 3]);
                    }
                    var_32 = 34;
                }
            }
        }
        arr_32 [i_0] = (!(arr_20 [i_0] [i_0]));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        var_33 &= ((((((arr_27 [i_11] [i_11] [1] [i_11] [0] [i_11] [i_11]) % var_10))) ? 15 : (((arr_33 [8] [i_11]) << (var_9 - 15472)))));
        var_34 = (arr_11 [i_11] [i_11]);
        var_35 *= var_7;
        arr_36 [i_11] = var_8;
        arr_37 [i_11] = ((var_0 > ((((arr_21 [i_11] [i_11] [i_11]) || var_13)))));
    }
    var_36 = ((((var_6 ? (!var_11) : var_0))) ? var_4 : (((((20 ? 65521 : -53))) ? 52 : ((-13 ? var_10 : 13)))));
    var_37 = (min(((12079516980362896773 ? 38302 : -13)), (~-13)));
    #pragma endscop
}
