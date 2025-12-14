/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    var_19 = (arr_2 [i_1]);
                    var_20 = ((min((arr_5 [5] [i_2 - 1] [i_2]), 7382545489274259686)));
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    arr_12 [i_1] [15] &= (~var_2);
                    var_21 = (((arr_5 [i_3] [i_1] [i_0]) ? (((((7382545489274259686 ? 1 : 4373650655412925990)) <= 4294967295))) : var_2));
                    arr_13 [i_0] [i_1] [i_3] [i_1] = ((150813176 >= (16777215 <= var_1)));
                    var_22 = (max(var_22, (arr_1 [i_0])));

                    for (int i_4 = 2; i_4 < 17;i_4 += 1) /* same iter space */
                    {
                        arr_17 [i_4] [16] = (min(((max((arr_9 [i_4 - 1] [i_4 - 2] [i_4 - 1] [i_4]), 1))), (max(-106, (arr_9 [i_4 - 2] [i_4] [i_4 + 1] [11])))));
                        var_23 = (max(var_23, ((((~(arr_10 [i_4 + 1] [i_1] [i_3] [i_4 + 1])))))));
                    }
                    for (int i_5 = 2; i_5 < 17;i_5 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_24 ^= var_18;
                            var_25 = (min(var_25, ((((arr_22 [i_0] [i_1] [i_1] [i_5] [i_5 + 1]) ? ((var_14 ? (arr_9 [i_0] [i_0] [1] [i_0]) : 1)) : (arr_14 [11] [2] [0] [0]))))));
                            var_26 = (max(var_26, var_10));
                        }
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            var_27 = min(((!((min(1, var_14))))), ((247 && (arr_9 [i_0] [i_1] [i_3] [i_5 - 2]))));
                            var_28 &= (arr_21 [i_0] [i_1] [i_1] [i_3] [i_1] [i_1] [1]);
                            var_29 = (((((((arr_24 [i_7] [i_5 - 1] [i_5] [i_5] [i_5] [i_5 - 1]) <= (arr_24 [i_7] [i_5 - 2] [i_5] [i_5] [i_5] [i_5 - 2]))))) & (arr_24 [i_7] [i_5 + 1] [i_5] [2] [i_5 - 2] [i_5 + 1])));
                        }
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            var_30 = (((((-((var_3 ? 3030781172 : var_1))))) || (((((max((arr_11 [i_5] [i_3]), var_10))) ? 4 : (((arr_2 [i_0]) ? -1 : 2365)))))));
                            var_31 = ((((8 ? 58 : 1)) & 3656));
                            var_32 = (min(var_32, ((((!702859268) * (((!var_14) % var_5)))))));
                            var_33 = (max(var_33, (((((1 ? (max(var_5, 65535)) : 4671253372096335530)) + 12)))));
                            var_34 ^= 1;
                        }
                        var_35 ^= -180;
                        var_36 = 1;
                    }
                }
                var_37 ^= (arr_21 [i_1] [6] [i_1] [1] [i_0] [3] [i_0]);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 0;i_10 += 1)
                    {
                        {
                            arr_33 [i_1] [i_10] = 53;
                            var_38 = ((((((arr_9 [16] [13] [i_10 + 1] [i_10]) & (arr_9 [i_0] [i_1] [i_10 + 1] [i_10])))) ? (((min((arr_9 [i_0] [i_1] [i_10 + 1] [i_10 + 1]), (arr_9 [i_0] [i_1] [i_10 + 1] [i_0]))))) : (max(81, -865468988497118963))));
                        }
                    }
                }
            }
        }
    }

    for (int i_11 = 0; i_11 < 18;i_11 += 1)
    {
        arr_36 [11] = (((max(((var_10 ? -1 : var_8)), (((arr_26 [i_11] [i_11] [i_11]) / (arr_3 [12]))))) / ((((var_2 ? -106 : 702859268))))));
        arr_37 [i_11] = ((var_11 ? (((~var_4) ? -1018008538 : (var_17 | var_6))) : 79));
        arr_38 [10] = -1440742805;
    }
    var_39 = ((((((var_6 <= (max(1, var_13)))))) * ((25 ? 14477064302675084414 : 3485895032))));
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 16;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 16;i_13 += 1)
        {
            {
                var_40 = (min(var_40, (((+(((arr_20 [i_13] [i_13] [i_13] [i_13] [i_13]) ? ((2569236912 ? 1 : 3485895042)) : var_6)))))));
                arr_44 [i_12] = (-7382545489274259687 >= 809072254);
                arr_45 [i_12] [9] [i_12] = var_8;
            }
        }
    }
    #pragma endscop
}
