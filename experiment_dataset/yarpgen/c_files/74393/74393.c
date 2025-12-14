/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (min(var_19, (((((((var_4 ? var_0 : var_3)) != var_9)) ? 3152346391513457405 : (arr_2 [17] [i_0]))))));
        var_20 = (arr_1 [i_0]);
        arr_4 [14] = var_7;
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            {
                                var_21 = (max(((3152346391513457405 ? 2849 : (278338722 < -892087514))), (arr_14 [i_4 - 3] [i_5])));
                                var_22 = -892087514;
                                arr_20 [i_5] [i_3] [i_3] [9] [i_2] [i_3] [9] = (max((0 < 0), var_8));
                            }
                        }
                    }
                    var_23 = (min(var_23, (-70 ^ 278338722)));
                    var_24 = var_12;
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
    {
        var_25 = 154;
        arr_25 [i_6] = (max(-59, 9606689944214400942));

        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            var_26 = ((((0 >> 0) ? ((0 >> (811681906 - 811681887))) : 4073131715)));
            arr_28 [i_7] [i_6] = 31918;
            var_27 = var_14;
        }
        var_28 = (max(0, 0));
        var_29 += var_1;
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
    {
        var_30 = 9105;
        arr_31 [i_8] = (((!var_12) - (1 - 4294967295)));
        var_31 = var_14;
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        var_32 = ((!(arr_26 [i_9])));

        for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
        {
            var_33 = ((-(arr_30 [i_9])));
            var_34 = ((-(var_9 >> var_4)));
        }
        for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
        {

            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                var_35 += (~1);
                arr_42 [i_9] [1] = -7491760631495078467;
            }
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                for (int i_14 = 3; i_14 < 11;i_14 += 1)
                {
                    {
                        arr_47 [13] [1] [i_13] [i_9] = ((52266 ? 127 : 154));
                        var_36 = (arr_15 [i_14 + 2] [i_14 - 1] [i_13] [i_13] [i_9]);
                        arr_48 [6] [i_9] [6] [i_13] [i_14] = (((var_5 && var_1) >> (var_10 > 14136125681962079843)));
                        arr_49 [i_9] [i_11] [i_11] [i_11] [i_9] [i_9] = var_1;
                        var_37 = var_15;
                    }
                }
            }
            arr_50 [i_9] = (((arr_8 [i_11] [i_11]) ? var_11 : var_10));
        }
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 14;i_16 += 1)
            {
                {
                    arr_56 [i_9] [i_9] [i_9] [i_9] = 154;
                    var_38 = (min(var_38, (-9223372036854775807 - 1)));
                    var_39 = (((((var_4 ? var_6 : var_1))) || 9006649498927104));
                    var_40 = ((3278056449867523549 >> (((((-9223372036854775807 - 1) - -9223372036854775789)) + 44))));
                }
            }
        }
        arr_57 [i_9] = var_13;
    }
    #pragma endscop
}
