/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((149 * var_8) ? ((1 ? var_17 : 4294967295)) : (((min(var_12, var_14))))))) ? var_11 : (var_1 - 3995405409)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [i_0] = var_17;
                arr_8 [i_0] [i_0] = var_1;
                arr_9 [i_0] [i_0] = ((((!(!var_19))) ? (arr_0 [i_0]) : (((!3995405396) ? (((arr_3 [i_0]) ? (arr_1 [i_1]) : var_15)) : (var_5 || var_2)))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 |= (max(65, 17458556329115378409));
                                var_22 += ((((((arr_10 [i_0] [i_1 - 1] [i_1 - 1] [i_3]) ? ((117 ? var_4 : var_13)) : 1))) ? (((arr_13 [i_1 + 2] [i_4 - 1]) ? var_2 : (var_13 / 101))) : -var_3));
                                var_23 = ((238 % ((((max(90, 255))) ? 1 : var_2))));
                                var_24 += 1;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_25 *= (73 && -1326877003);
                                var_26 = ((((min((~var_5), (arr_20 [i_1] [i_1 - 1] [i_1 + 2] [i_5 + 1] [i_6 - 1])))) ? var_1 : 255));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    var_27 = (min(88, 159));
                    arr_24 [i_0] [i_0] [i_1] [i_7] = (arr_0 [i_0]);

                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_28 ^= (min(1, (!var_19)));
                        arr_29 [i_0] [i_1] [i_7] [i_1 + 2] = min(var_8, (((arr_15 [i_1 + 1]) ? 2519233707 : 1)));
                    }
                    for (int i_9 = 1; i_9 < 17;i_9 += 1)
                    {
                        arr_33 [i_0] [i_0] [i_1] [i_7] [i_7] [i_9 + 1] = max(-112527418, -609966248511425117);
                        var_29 = (max(var_29, 3995405401));
                    }
                }
                /* vectorizable */
                for (int i_10 = 4; i_10 < 17;i_10 += 1)
                {
                    arr_36 [i_0] [i_0] [i_0] = (arr_27 [i_10 - 2] [i_10] [i_0] [i_1 + 2] [i_0] [i_0]);
                    var_30 = 299561870;

                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        var_31 |= 11019236106885659543;
                        arr_39 [i_0] [i_1] [i_0] [i_10] [i_10] [i_11] = 145;
                        arr_40 [i_10] [i_1] [i_1] [i_11] [i_11] [i_11] = ((~(arr_21 [i_0])));
                    }
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        arr_45 [i_12] = var_3;
                        arr_46 [i_1] = 3995405400;
                    }
                    arr_47 [i_0] [i_1] [i_1] = 3995405426;
                }
                var_32 = 299561894;
            }
        }
    }
    #pragma endscop
}
