/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (min(-1, (!var_9)));
                    arr_11 [i_0] [i_1] [i_1] [i_2] = ((-(((-78865804 + 2147483647) >> var_4))));
                }
            }
        }
    }
    var_19 = -9976;
    var_20 = ((32512 ? -335937022 : 8740141989108912928));
    var_21 = -var_10;

    for (int i_3 = 2; i_3 < 19;i_3 += 1)
    {
        var_22 = (((4294443008 - 3673345075) ? (0 / 1) : ((-491299308 ? var_12 : var_13))));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 18;i_5 += 1)
            {
                {
                    arr_21 [i_5] = (((((!(!var_12))))) * ((var_7 ? 67108864 : var_7)));
                    var_23 = (((max(66, var_3)) * -56));
                    var_24 = (((var_6 ? var_0 : ((9976 ? var_4 : var_12)))));
                    var_25 = (((((max(9976, 10867))) >> (1660653183 - 1660653177))));
                }
            }
        }
        var_26 = var_11;
        var_27 = ((18235 ? 1660653183 : 1538606768));
        var_28 = (((((~var_17) <= (~642858070))) ? (var_8 / -7168) : ((var_1 ? var_13 : var_14))));
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 12;i_6 += 1)
    {

        for (int i_7 = 3; i_7 < 13;i_7 += 1)
        {
            var_29 = var_16;
            arr_26 [i_6] [i_6] = (268435455 < 768);
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    {

                        for (int i_10 = 2; i_10 < 11;i_10 += 1)
                        {
                            var_30 = -1073741568;
                            var_31 = var_11;
                            var_32 = var_1;
                        }
                        for (int i_11 = 3; i_11 < 13;i_11 += 1)
                        {
                            arr_37 [i_9] [1] [10] [i_6] [i_7] = var_15;
                            arr_38 [3] [i_7] [i_6] [i_7 - 1] [i_7] [i_7 - 1] [12] = ((~(~var_14)));
                            var_33 = 32;
                            arr_39 [i_9] [i_8 - 1] [i_6] [i_6] [i_9] [i_7] [i_7] = (var_4 | var_3);
                        }
                        arr_40 [i_9] [i_8 - 1] [i_9] [i_6] = ((var_1 >> (var_12 - 30)));
                    }
                }
            }
        }
        var_34 = -68;
        arr_41 [i_6] = var_2;
    }
    #pragma endscop
}
