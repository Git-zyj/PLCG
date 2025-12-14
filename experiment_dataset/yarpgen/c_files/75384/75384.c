/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_16 ? var_17 : ((-1252916339 ? var_5 : ((9223372036854775807 ? var_6 : -3690303506229749919)))));
    var_19 = var_16;
    var_20 = (min(var_20, (-var_15 & var_16)));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_21 = (!-3690303506229749900);
            arr_7 [i_0] [1] = var_11;
            arr_8 [i_0] = (min(1045914268, (min(6926, ((var_14 ? (arr_2 [i_0] [i_1]) : var_16))))));
        }
        /* vectorizable */
        for (int i_2 = 4; i_2 < 19;i_2 += 1)
        {
            arr_12 [i_0] = var_15;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_22 = var_8;
                        arr_18 [i_0] [i_2] [i_3] [i_0] = (!var_16);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    {
                        arr_24 [2] [i_0] [i_0] [2] = var_1;
                        var_23 = (min(var_23, var_17));
                        var_24 ^= ((-(((arr_4 [6]) ? 62 : -1252916344))));
                    }
                }
            }
            arr_25 [i_0] [i_0] = ((-((var_15 ? var_9 : (arr_22 [i_0 - 2] [i_0 - 2] [i_0] [i_2])))));
        }
        arr_26 [i_0] = (1 & 6284);
    }
    for (int i_7 = 1; i_7 < 21;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                {
                    var_25 = -var_4;
                    var_26 = (max((((1 ? (-2147483647 - 1) : 1))), var_5));
                }
            }
        }
        var_27 -= ((~(((-(arr_31 [i_7] [i_7 + 1]))))));
    }
    #pragma endscop
}
