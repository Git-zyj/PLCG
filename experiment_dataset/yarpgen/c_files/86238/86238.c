/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 |= var_9;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_13 = var_7;
                        var_14 = (var_5 + 0);
                        var_15 -= ((~((((32 ? (arr_5 [i_0] [18] [i_0] [i_0]) : -19029))))));
                        var_16 -= ((((max((arr_9 [i_2] [i_2] [i_2 + 1] [i_2] [i_2 - 1] [24]), 102639821))) ? ((-(arr_8 [i_1] [i_2 + 1] [i_2 + 1] [i_2 - 1]))) : (~9687)));
                    }
                }
            }
            var_17 += var_5;
        }

        for (int i_4 = 2; i_4 < 24;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            arr_21 [i_0] [i_6] [i_5] [i_7] [i_7] [i_0] [i_5] = (((var_2 ? -32 : 136)));
                            var_18 += -1;
                            var_19 += (68585259008 / 6291456);
                        }
                    }
                }
                arr_22 [i_0] [i_0] = var_0;
                var_20 += var_1;
                arr_23 [i_0] [i_4 + 1] [i_0] = (((arr_11 [i_4 + 1] [i_4]) ? (arr_14 [i_0] [i_4] [i_4]) : var_8));
                arr_24 [i_0] [i_5] = var_5;
            }
            for (int i_8 = 3; i_8 < 23;i_8 += 1)
            {
                var_21 |= (max((arr_26 [i_8]), ((1875744233 == (arr_20 [i_4 + 1] [i_8 - 3] [i_4])))));
                var_22 &= ((-(min(((max((arr_4 [i_4] [i_4]), 32949))), (min(var_2, 4288675840))))));
            }

            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                var_23 = ((((max(136, (arr_25 [i_0] [i_0] [i_0] [21])))) ? ((1 ? (arr_10 [i_4] [14] [i_0]) : (arr_25 [17] [i_0] [i_0] [17]))) : (arr_25 [4] [i_0] [i_0] [i_0])));
                var_24 = ((-(((((var_8 ? (arr_26 [i_0]) : 3864))) ? (((arr_26 [i_0]) / (arr_7 [i_0] [i_4] [i_9]))) : (arr_12 [i_0] [i_4 - 2] [i_0])))));
                var_25 = 124;
            }
        }
        /* vectorizable */
        for (int i_10 = 1; i_10 < 22;i_10 += 1)
        {
            var_26 = (max(var_26, 2500910155));
            arr_33 [i_0] = (!17293822569102704640);
        }
    }
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        var_27 += -5152;

        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            var_28 -= 9687;

            /* vectorizable */
            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                var_29 += ((var_8 && (arr_41 [i_11] [i_12] [i_13] [i_13])));
                arr_44 [i_11] [i_13] = -199;
                arr_45 [i_11] [i_11] = (var_5 && -16384);
                arr_46 [i_11] [i_12] [13] [1] = (~-9687);
            }
            var_30 += ((+((min((arr_2 [i_11]), (arr_25 [i_11] [14] [i_11] [i_11]))))));
            var_31 = var_7;
        }
        var_32 += ((-((((((1225400982 ? (arr_41 [i_11] [i_11] [i_11] [i_11]) : 496))) && (arr_15 [i_11] [2] [i_11] [i_11]))))));
    }
    var_33 += ((4542458550225544874 ? (((~((var_1 ? var_9 : -9661))))) : 17293822569102704640));
    #pragma endscop
}
