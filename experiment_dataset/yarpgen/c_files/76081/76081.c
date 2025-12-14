/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((((min(65535, var_10))) ? (-122 == var_7) : -var_10)), var_3));
    var_16 ^= ((max((min(3026105606, var_0)), var_9)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 ^= (arr_1 [i_0] [i_0]);
        var_18 = 2475595532;
        var_19 = (max(var_19, var_0));

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            var_20 = (((-32767 - 1) + (arr_0 [i_1 - 1])));
            var_21 = (var_5 ? -28464 : (arr_3 [i_0] [i_1 + 3] [i_1]));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                var_22 = (arr_2 [i_0] [i_2]);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_23 = (var_11 ^ 1268861689);
                            var_24 = (min(var_24, (-1674 / 624522718)));
                            var_25 = (2808 - 156);
                            arr_15 [i_0] [i_0] [i_3] [i_4] [i_5] = var_3;
                        }
                    }
                }
                var_26 = ((!(arr_3 [5] [i_2] [i_2])));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 12;i_7 += 1)
                    {
                        {
                            var_27 = (~var_0);
                            var_28 = ((var_1 ? var_6 : ((var_4 ? 1268861699 : var_11))));
                            var_29 = var_11;
                            var_30 = (min(var_30, var_6));
                        }
                    }
                }
            }
            arr_20 [i_0] = ((1268861699 ? 3026105619 : var_13));
            arr_21 [i_0] |= (arr_8 [i_0]);
        }
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            arr_26 [i_0] [i_0] = (~var_3);
            /* LoopNest 2 */
            for (int i_9 = 3; i_9 < 10;i_9 += 1)
            {
                for (int i_10 = 4; i_10 < 11;i_10 += 1)
                {
                    {
                        var_31 = ((9695107375118048498 >> (var_0 - 12741486326388693215)));
                        var_32 = (max(var_32, (arr_4 [i_0] [i_8])));

                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            var_33 = (arr_3 [i_0] [i_8] [i_9]);
                            var_34 ^= (!var_2);
                        }
                    }
                }
            }
            var_35 = (max(var_35, (((!(arr_29 [i_0] [i_8] [7] [1]))))));
        }
        var_36 = (max(var_36, (!var_4)));
    }
    var_37 = (min(10657397741432414140, var_10));
    #pragma endscop
}
