/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0 - 2] = (max((arr_1 [i_0 + 1]), var_12));
        var_18 = (((((max(0, 255))) ? (!1) : var_16)));
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        var_19 += var_0;

        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
            {
                var_20 = (max(((~(max(4689021496084023892, var_16)))), ((max(var_13, ((var_3 ? 0 : var_9)))))));
                var_21 += 18310806047764431456;
                var_22 *= (var_6 > -8320);
                arr_10 [i_1] [i_1] [0] [i_3] = 12550981280891242529;
            }
            for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
            {
                arr_13 [i_4] [i_4] [i_1] = (~-255);
                var_23 = (!1144815006);
            }
            arr_14 [i_1] [i_1] = (arr_6 [i_1] [i_1]);
            arr_15 [2] [i_1] = (arr_4 [i_1]);
        }
        for (int i_5 = 4; i_5 < 17;i_5 += 1) /* same iter space */
        {
            var_24 += 1447201874642693290;
            /* LoopNest 3 */
            for (int i_6 = 4; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        {
                            var_25 += (((127 ? 8319 : (max(11880333997601340010, 9774689674691841710)))));
                            arr_25 [i_5] [i_7] [i_6 - 2] [4] [i_8] [i_7] [i_7] &= var_2;
                        }
                    }
                }
            }
            arr_26 [i_1] [i_1] = (!14);
            var_26 = (!-954482222227881475);
        }
        /* vectorizable */
        for (int i_9 = 4; i_9 < 17;i_9 += 1) /* same iter space */
        {
            arr_29 [i_1] [i_9] [i_9] = 213;
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        {
                            var_27 *= ((var_16 ? 1 : -8320));
                            arr_37 [i_9] [i_10] [i_9] &= 4689021496084023892;
                            var_28 &= (arr_11 [i_9 + 2] [i_9] [i_9 + 2]);
                            arr_38 [i_1] [i_1] [i_10] [i_1] = 11880333997601340010;
                            arr_39 [i_1] [i_11 - 2] [i_11 - 2] [i_10] [i_1] [i_1 - 1] [i_1] = 4689021496084023892;
                        }
                    }
                }
            }
            var_29 = -11880333997601340010;
        }
        for (int i_13 = 4; i_13 < 17;i_13 += 1) /* same iter space */
        {
            arr_42 [i_13] &= (max((arr_11 [i_1] [i_1 - 2] [8]), (max(8319, (arr_19 [i_13 + 2])))));

            for (int i_14 = 0; i_14 < 19;i_14 += 1)
            {
                /* LoopNest 2 */
                for (int i_15 = 3; i_15 < 18;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 19;i_16 += 1)
                    {
                        {
                            arr_51 [i_1] [i_1] [i_14] [0] [i_15] [8] &= 98;
                            var_30 &= 0;
                        }
                    }
                }

                for (int i_17 = 0; i_17 < 19;i_17 += 1)
                {
                    var_31 = (max(var_31, 13757722577625527724));
                    var_32 = ((-(arr_33 [i_1 - 1])));
                }
                arr_55 [11] [i_1] [i_1] = ((!((max(1766163191, -111)))));
                arr_56 [i_1] [i_1] [i_1] = var_9;
                var_33 = (min(var_33, var_14));
            }
            for (int i_18 = 0; i_18 < 19;i_18 += 1)
            {
                var_34 = (arr_46 [18]);
                var_35 = (((((-((var_4 ? var_16 : 8990))))) ? 1634 : (max((arr_40 [i_1 - 2]), var_9))));
            }
            arr_59 [i_1] [i_13] [i_13 + 2] = ((max(9080557755650534636, 31)));
        }
    }
    #pragma endscop
}
