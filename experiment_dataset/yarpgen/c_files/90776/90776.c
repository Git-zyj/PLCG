/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((+(((2047 == var_2) ? var_3 : (min(var_3, var_3))))));
    var_11 ^= var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_12 = ((((((var_7 ? var_5 : 61)))) ? (min((min(6409818648670446407, -6409818648670446402)), var_2)) : ((((min(13231, 12)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_13 &= 4020915640165820412;
                                var_14 = ((!((max(((var_9 << (((var_5 + 2005359387) - 24)))), 32749)))));
                                var_15 ^= (arr_5 [i_1] [16] [i_3 - 1] [i_4]);
                            }
                        }
                    }
                    var_16 = (max((min(3927857927, 8621)), (((var_6 ? (arr_1 [i_0] [i_2]) : var_6)))));
                }
            }
        }
    }
    var_17 = (max(var_17, (!var_7)));

    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    {
                        var_18 = (max(var_18, 16383));

                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            var_19 -= ((max(((var_6 * (arr_10 [i_5] [i_6] [i_7] [i_8] [i_9] [i_9]))), ((min(93, 52))))));
                            var_20 = (min(var_20, ((min(4294967295, (((2875 << (3927857928 - 3927857921)))))))));
                            var_21 = (min((max(3927857931, 21110)), 114));
                            arr_24 [i_5] [i_5] [i_6 + 1] [i_7] [5] [i_9] [i_7] = ((367109365 ? (min((((var_3 ? 1875355548 : (arr_14 [i_8])))), (min(2823240804, var_8)))) : (min(((min((arr_18 [i_5] [i_5] [i_5]), var_5))), (max(var_4, var_8))))));
                        }
                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            var_22 = (max(124, (min((max(var_0, var_4)), (-233510210 - -776704823)))));
                            var_23 = var_2;
                            var_24 = (max(var_24, -1471726500));
                        }

                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            arr_31 [i_8] [i_8] [i_8] [i_8] [i_11] = 233510210;
                            var_25 = (arr_20 [i_6] [i_6 + 1] [6] [i_6] [i_6 - 1] [7]);
                        }
                        arr_32 [i_5] [i_5] = ((((min(233510210, 367109365))) ? (min((arr_18 [i_5] [i_6 - 1] [i_7]), -var_8)) : (((max((arr_22 [i_5] [i_6 + 2] [2] [i_6 + 1] [i_7] [1]), (arr_22 [i_6 + 2] [i_6 - 1] [12] [i_7] [i_7] [12])))))));
                    }
                }
            }
        }
        var_26 = (min(((max((min(39758, 406884873)), 0))), var_3));
    }
    #pragma endscop
}
