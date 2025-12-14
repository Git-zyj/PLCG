/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_10 = (!32643);
                    var_11 = 1;
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((((min((32654 > 32914), (((arr_4 [i_0]) ? 32893 : (arr_4 [i_2])))))) ? (((min((arr_1 [i_0] [i_1]), (arr_2 [i_1] [i_2] [i_1]))))) : (~127)));
                    var_12 = (min(var_12, (((142 ? 1 : 52608)))));
                }
            }
        }
        var_13 = var_8;

        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_14 = (arr_9 [i_0 - 1] [i_0]);
                var_15 = (arr_3 [i_0 - 1]);
                arr_13 [i_0] [i_3] [i_4] [i_4] = (arr_0 [i_0 - 1]);
                arr_14 [i_4] [i_4] = (arr_7 [i_4] [i_3] [i_0] [0]);
            }
            for (int i_5 = 2; i_5 < 12;i_5 += 1)
            {
                var_16 = (max(var_16, (((-(arr_1 [i_0 - 1] [i_3]))))));
                var_17 = (((((127 << (32643 - 32622)))) ? (((arr_3 [i_0]) ? (arr_7 [i_0 - 1] [i_0 - 1] [i_5] [i_5]) : var_1)) : 32864));
                arr_17 [i_5 + 1] = ((var_7 > 209) % ((137438953471 ? 32643 : 255)));
                var_18 ^= ((-(arr_2 [i_3] [i_3] [i_3])));
                var_19 = 10519689269585003863;
            }
            arr_18 [i_3] [i_0 - 1] [i_0 - 1] = 0;
        }
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        {
                            var_20 = (max(var_20, (min((1 != 17), 18446744073709551488))));
                            arr_30 [i_0] [i_6] [i_7 - 1] [i_8] [i_6] = (min((((arr_10 [i_9] [i_0 - 1]) ? (arr_15 [i_0 - 1]) : (~var_3))), var_5));
                        }
                    }
                }
            }
            var_21 = var_1;
            var_22 = (min((((32864 ? 1 : 1))), (((arr_27 [i_6] [i_6] [i_6] [i_0 - 1] [i_0 - 1]) ? (arr_20 [i_6] [i_0]) : 32864))));
        }
    }
    var_23 = ((-(min(((3268978293483685487 ? var_2 : 0)), (var_2 & -7714731482928800149)))));
    #pragma endscop
}
