/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_14));
    var_20 = var_15;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1 + 3] [i_2 + 1] [i_0] [i_3] = -8643;
                        var_21 = (min(190356345, (min(var_14, (min(var_14, (arr_3 [i_0] [i_3])))))));
                    }
                }
            }
        }
        var_22 = -96;
        var_23 = (min((!var_6), (max(-8647, 255))));
        var_24 = (arr_3 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {
                        var_25 = -151;
                        arr_22 [i_4] [0] [i_4] [i_4] = ((-(arr_14 [i_4])));
                        arr_23 [i_4] [i_4] = ((~(arr_13 [i_4])));
                    }
                }
            }
        }

        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    {
                        var_26 = (max(var_26, (((-(((-2147483647 - 1) ? var_12 : (arr_15 [i_10] [10]))))))));
                        arr_31 [i_4] [i_4] [i_4] [i_4] = var_17;
                        var_27 = ((var_17 ? -var_10 : ((4246590530623413710 ? -1990305013 : var_11))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_11 = 1; i_11 < 13;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    {
                        var_28 = 156;
                        arr_37 [i_4] [i_4] [i_4] [5] = (arr_34 [i_8] [i_8] [i_11] [i_12] [i_11 + 3]);
                    }
                }
            }
            var_29 = (arr_20 [i_4] [i_4] [i_8] [i_8]);
        }
        for (int i_13 = 0; i_13 < 16;i_13 += 1)
        {
            var_30 = ((!(arr_11 [i_4])));
            var_31 += ((-(arr_30 [i_4] [i_4])));
            var_32 += ((var_1 ? (arr_7 [i_4] [i_4] [i_4] [i_13] [i_13] [i_13]) : var_0));
            var_33 -= ((var_13 ? (!3827911983772547244) : (arr_28 [i_4] [i_4] [8] [i_4])));
        }
        var_34 = (max(var_34, ((((arr_11 [i_4]) ? var_8 : (arr_11 [i_4]))))));
    }
    for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
    {
        arr_44 [i_14] = (min(var_5, (arr_24 [i_14] [i_14])));
        var_35 = (!1841614887);
    }
    var_36 |= var_7;
    var_37 = (min(var_6, (((255 ? -14851 : 12869823737917964119)))));
    #pragma endscop
}
