/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_10 = (max(var_7, ((max(var_2, (arr_2 [i_0]))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            var_11 *= (((arr_14 [i_0] [i_1] [i_4 - 2] [i_3] [i_4 + 1]) + (((max(13443, 4531))))));
                            var_12 = (min(-4, ((var_8 ? 1413641697503180113 : ((((!(arr_9 [i_0])))))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 9;i_5 += 1)
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_12 [i_3] [i_1] [i_0]) && (arr_7 [i_0] [i_5 - 2])));
                            var_13 = (arr_13 [i_0] [i_1] [i_2]);
                            arr_19 [i_0] [i_0] = ((var_6 ? (arr_1 [i_0] [i_0]) : 17033102376206371490));
                        }

                        for (int i_6 = 4; i_6 < 9;i_6 += 1)
                        {
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((-(((!(arr_5 [i_6 - 1] [i_6] [i_6 + 3]))))));
                            arr_25 [i_0] [i_0] = var_1;
                            var_14 = (max(17033102376206371517, -8427669221572091154));
                            arr_26 [i_0] [i_1] [i_2] [i_2] [i_3] [i_6] = var_5;
                        }
                        var_15 = (-5205032372369897647 && 8427669221572091182);
                        var_16 = ((((var_8 ? var_9 : (arr_15 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))) << ((-8220246970252836596 ? ((((!(arr_14 [i_0] [i_1] [i_2] [i_3] [i_3]))))) : 17033102376206371502))));
                        arr_27 [i_0] [i_1] = (((max((arr_10 [i_3]), var_1)) > ((((arr_10 [i_3]) << (var_9 - 10602))))));
                    }
                }
            }
        }
        arr_28 [i_0] [i_0] |= (max(5205032372369897647, (~var_4)));
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
    {
        var_17 = (max((((arr_11 [i_7] [i_7] [i_7] [i_7]) ? (arr_1 [i_7] [i_7]) : (arr_12 [i_7] [i_7] [i_7]))), (((-(arr_12 [i_7] [i_7] [i_7]))))));
        var_18 = (~-7472694927155545803);
        var_19 = (min((((~(arr_17 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))), var_0));
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
    {
        arr_34 [i_8] = (!32767);

        for (int i_9 = 1; i_9 < 18;i_9 += 1)
        {
            var_20 = (max(var_20, (((((((arr_35 [i_9 + 3] [i_8]) & -32757))) ? ((((arr_35 [i_9 + 2] [i_8]) | 108))) : var_4)))));

            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                arr_41 [i_8] [i_9] [i_10] = 32752;
                arr_42 [i_8] = (arr_36 [i_9] [i_9]);
                var_21 = var_4;
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                arr_45 [i_9 + 1] [i_8] = ((-1783413215 ? (arr_38 [i_8] [i_8] [i_8] [i_8]) : (arr_38 [i_8] [i_8] [i_8] [i_8])));
                var_22 = ((!(7472694927155545797 < 17033102376206371502)));
                arr_46 [i_11] [i_11] [i_11] = (((arr_44 [i_9] [i_9 + 1]) ? var_8 : 62107));
            }
            for (int i_12 = 3; i_12 < 20;i_12 += 1)
            {
                arr_51 [i_12] [i_12] [i_12] [i_12] = arr_37 [i_8] [i_8];
                arr_52 [i_12] [i_12 + 1] [i_12] = (max(var_4, (var_0 <= var_1)));
            }
            /* vectorizable */
            for (int i_13 = 0; i_13 < 22;i_13 += 1)
            {
                arr_55 [i_8] [i_13] [i_13] = 17033102376206371517;
                var_23 = (((((arr_33 [i_9] [i_13]) ? var_2 : (arr_31 [i_8] [i_8]))) ^ var_2));
                var_24 = 7760050943321738856;
            }
            arr_56 [i_8] [i_9] [i_8] = (((((((max(18, -111))) ? (max((arr_39 [i_8] [i_8] [i_8] [i_8]), -73)) : 3278838857))) ? var_4 : (max(((max(var_2, 4145))), ((4129 ? var_8 : var_7))))));
        }
        var_25 = ((max(((14554062524186696711 ? -118 : -2147483642)), 4356063649786748441)));
    }
    for (int i_14 = 0; i_14 < 22;i_14 += 1) /* same iter space */
    {
        var_26 ^= ((-((var_8 ? var_5 : (((arr_47 [i_14] [i_14] [i_14]) ^ (arr_31 [i_14] [i_14])))))));
        arr_59 [i_14] [i_14] = var_3;
    }
    var_27 = ((var_3 ? ((-(max(17033102376206371502, 1413641697503180086)))) : (((max(var_8, var_1))))));
    #pragma endscop
}
