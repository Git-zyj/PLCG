/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_19 *= (arr_12 [10] [i_1] [10] [6] [i_4]);
                                var_20 = (174 & (arr_0 [i_0]));
                                var_21 = (min(var_21, 82));
                                arr_13 [i_0] [i_1] [i_1] [i_0] [i_1] = (!31921);
                                var_22 = ((248 ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (((57344 != (arr_10 [i_4] [i_4] [i_0] [12] [i_4]))))));
                            }
                        }
                    }
                    var_23 += (0 | (arr_12 [i_2] [i_2] [i_1] [i_1] [i_0]));
                    arr_14 [16] [i_0] = (~(arr_9 [i_0]));
                    var_24 = (min(var_24, 166));
                }
            }
        }
        var_25 = var_10;
    }
    var_26 = (~-var_6);
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            {
                var_27 = (arr_12 [i_5 - 3] [i_5 - 2] [i_5] [i_5 + 1] [i_5 - 3]);
                /* LoopNest 3 */
                for (int i_7 = 4; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                arr_27 [i_9] [i_9] [i_9] [5] [i_8] = (max((arr_0 [i_8]), (max((arr_0 [i_8]), (arr_0 [i_8])))));
                                var_28 = (((arr_12 [i_5] [i_5] [i_5] [i_5] [i_5]) && (var_5 & 3297861715)));
                                var_29 = (((((arr_23 [8] [i_6] [8] [i_8]) > (arr_15 [i_7] [i_6]))) ? 255 : (((min((arr_15 [i_9] [i_6]), (arr_5 [12] [8] [0] [i_9])))))));
                            }
                        }
                    }
                }
                var_30 = var_7;

                for (int i_10 = 1; i_10 < 16;i_10 += 1)
                {
                    var_31 = (arr_25 [11] [i_5 + 1]);
                    var_32 += (((arr_16 [i_5 - 3]) ? (~var_3) : (~var_15)));
                    var_33 = ((var_13 ? (arr_21 [i_5] [i_5] [i_5]) : (arr_7 [i_5] [i_6] [i_10 + 2] [i_5 - 3])));
                    var_34 = (max(((max((arr_18 [i_5 + 1] [i_5 - 3]), (((arr_25 [7] [i_5 - 1]) ? (arr_0 [i_10]) : var_4))))), (arr_22 [i_5 + 1] [i_10 - 1] [i_5 - 1] [i_10 - 1] [i_10])));
                }
                for (int i_11 = 3; i_11 < 16;i_11 += 1)
                {
                    var_35 += (((arr_28 [i_5] [i_5] [i_5 + 1]) == ((((((arr_21 [i_6] [i_11 + 2] [i_11]) ? var_6 : var_4))) ? ((((arr_30 [3] [i_6] [i_11] [i_6]) ? 174 : (arr_18 [i_5 + 1] [i_5 + 1])))) : (arr_23 [i_6] [i_11] [i_11 + 1] [i_11])))));
                    arr_36 [12] [16] [i_5 - 2] = (((((((var_10 != (arr_10 [i_5] [14] [i_6] [i_5] [2]))) ? (((var_4 ? (arr_20 [i_5 - 2] [i_6] [i_6] [i_11]) : var_12))) : (arr_4 [i_6] [i_6])))) ? 8191 : var_0));
                    arr_37 [i_5] [i_5] [i_5] [i_5] = ((+(((arr_30 [i_5] [i_5] [i_6] [3]) ? ((((arr_33 [i_5]) || 82))) : (arr_32 [i_5] [13] [i_11 + 2] [i_11 - 2])))));
                    var_36 = (((~633566627) ? 8192 : 63));
                    arr_38 [i_5] [i_5] [i_6] [i_11 - 1] = (max(((max(-var_14, ((max((arr_32 [13] [i_11] [i_6] [i_5 - 3]), var_6)))))), (((arr_31 [i_6] [i_5 - 2] [i_5] [i_6]) + (arr_17 [i_5])))));
                }
                arr_39 [i_5] [i_5] = (((arr_20 [i_6] [5] [16] [17]) - (3661400640 || 65535)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 16;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 16;i_13 += 1)
        {
            for (int i_14 = 3; i_14 < 14;i_14 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 2; i_15 < 15;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 13;i_16 += 1)
                        {
                            {
                                var_37 = (1042 & ((((arr_23 [i_16 + 3] [i_16 + 2] [i_15 + 1] [i_14 - 3]) <= (arr_23 [i_16 + 1] [i_16 + 3] [i_15 + 1] [i_14 - 3])))));
                                var_38 = (((((((arr_35 [i_14] [2] [12] [i_14 + 2]) | (arr_35 [i_16] [i_15 - 1] [i_13] [6])))) ? (((arr_6 [i_12] [i_12] [1] [1]) ? (arr_25 [3] [3]) : 65535)) : ((var_16 ? (arr_5 [i_15 + 1] [i_14] [i_13] [i_12]) : (arr_49 [i_12] [i_13] [14] [i_15] [i_16 + 1]))))));
                                var_39 = (max(-62, (max((max((arr_5 [i_12] [i_12] [i_12] [i_12]), var_17)), 82))));
                            }
                        }
                    }
                    var_40 *= (((arr_28 [11] [11] [i_14]) << (((arr_8 [i_12] [i_13] [1] [17] [i_13] [i_12]) - 3791374864))));
                }
            }
        }
    }
    var_41 = ((!(82 & var_13)));
    #pragma endscop
}
