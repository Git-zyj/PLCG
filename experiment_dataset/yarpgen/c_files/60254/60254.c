/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_10 = (arr_2 [i_0] [i_1]);
            arr_4 [i_0] [i_0] [i_1] = (!18446744073709551606);
            var_11 = (max(var_11, ((min(var_9, -var_6)))));
        }
        var_12 = min(var_4, 27);
        var_13 = (min(var_13, ((((6587949140307552550 < 1) ? (((var_4 << (11858794933401999065 - 11858794933401999055)))) : (405346472 >= -114))))));
    }
    for (int i_2 = 3; i_2 < 16;i_2 += 1)
    {
        var_14 = 65514;
        var_15 = ((((((arr_5 [i_2 + 3]) / var_7))) ? (arr_5 [i_2 + 2]) : 25));
        arr_7 [i_2 + 4] [i_2 + 2] &= (((arr_6 [i_2 + 3]) ? (-104171318 || 127) : ((~(arr_6 [i_2 - 1])))));

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_16 = (max(var_16, (arr_9 [i_2] [i_3])));
            var_17 = var_1;

            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                var_18 = (-314354472 || 31290);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_19 = (max(var_19, (((!(arr_13 [i_2] [4]))))));
                            var_20 = (((((((((arr_14 [i_2] [i_2] [i_4] [i_3] [i_6]) / -104171308))) && (((arr_13 [i_2] [i_5]) || (arr_12 [i_2] [i_3] [i_4] [i_5] [15] [i_6])))))) < (((var_0 > (arr_6 [i_5]))))));
                            var_21 += ((((((((arr_14 [i_2 + 2] [i_3] [i_4] [i_5] [i_5]) ? (arr_14 [3] [3] [i_4] [i_5] [i_5]) : var_9)) == (arr_13 [i_4] [i_4])))) + 93));
                        }
                    }
                }
                var_22 = ((255 ? 1 : 127));
            }
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                arr_19 [i_7] [i_3] [i_7] = 13626;
                arr_20 [i_2] [i_7] [1] = (((((!((min(var_4, var_8)))))) << ((((~((var_7 ? var_6 : (arr_12 [i_2] [19] [i_3] [i_3] [19] [i_7]))))) + 17))));
            }
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                var_23 = ((-512152836 ? 11858794933401999082 : -685538374));

                for (int i_9 = 3; i_9 < 19;i_9 += 1)
                {
                    var_24 = (max(var_24, -125));
                    arr_26 [i_8] [i_8] [i_9] [i_8] = ((!((max(3889620824, (arr_11 [11] [i_3] [i_8]))))));
                }
                var_25 -= (-104171293 - 113);
                var_26 = var_0;
            }
            /* LoopNest 3 */
            for (int i_10 = 4; i_10 < 19;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        {
                            arr_33 [i_2] [i_2] [i_2] [i_11] [i_2] [12] [6] &= var_8;
                            arr_34 [i_2] [i_10] [i_2] [i_11] = (max(512152828, var_0));
                        }
                    }
                }
            }
        }
    }
    var_27 = var_5;
    #pragma endscop
}
