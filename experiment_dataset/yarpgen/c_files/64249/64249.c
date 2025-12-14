/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= var_14;
    var_17 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        var_18 = (min(var_18, (((~((((3895005053 ? 40 : 17133)) >> (35 - 15))))))));
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((~((-(arr_6 [i_0] [i_0]))))) >= ((((((arr_2 [i_0] [i_0]) ? (arr_6 [i_0] [i_0]) : (arr_1 [i_1] [i_1]))) >= (!1))))));
                    }
                    arr_11 [i_0] [7] = (arr_0 [0]);
                    var_19 += (arr_8 [i_0] [5]);
                    var_20 ^= (max(212, (((!(arr_4 [1] [i_2 + 1] [i_2 + 1] [i_2 + 1]))))));
                }
                for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
                {
                    var_21 = (((((~(((arr_6 [i_0] [i_0]) * 15))))) ? (arr_6 [i_4] [i_4 + 1]) : ((-(arr_0 [i_4 + 1])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_22 = (max(var_22, (arr_16 [i_1 + 3])));
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] [10] = (arr_1 [i_4 + 1] [i_4 + 1]);
                            }
                        }
                    }
                    arr_21 [i_4] [i_1 - 2] [i_1 + 3] = (((arr_1 [i_0] [5]) ^ (((arr_4 [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1]) * (arr_4 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4])))));
                }
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    var_23 -= ((arr_9 [i_1] [i_1 - 2] [i_1] [i_1 + 3] [i_1 - 1] [i_1 + 3]) ? 49102 : (((arr_24 [i_1] [i_1] [i_1 + 2] [i_1]) ? (arr_22 [i_1 - 1]) : (arr_9 [i_1] [i_1] [i_1] [i_1] [i_1 - 2] [i_1]))));
                    arr_26 [i_0] [i_0] [i_0] = (((((arr_4 [i_1] [i_1 - 1] [i_1] [i_1 - 1]) != (arr_4 [i_1] [i_1] [i_1 + 3] [i_1 + 3]))) || ((((arr_4 [0] [i_1 - 1] [0] [i_1 + 2]) * (arr_4 [i_1] [3] [i_1] [i_1 + 2]))))));
                    var_24 = (arr_18 [i_1] [i_1 + 3] [i_1 - 1]);
                }

                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    var_25 = 2953592407;
                    arr_31 [i_0] [6] [i_0] [6] = (((((arr_0 [i_0]) <= (arr_27 [i_8] [i_8] [i_8] [i_8])))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        for (int i_10 = 4; i_10 < 14;i_10 += 1)
                        {
                            {
                                arr_39 [i_10] [i_1] [i_1 + 1] = ((+(((arr_18 [i_10] [i_10 + 1] [i_10]) ? (arr_33 [i_10 - 2] [i_10 - 2]) : (arr_23 [i_1 + 2] [i_1 - 1] [i_1 + 2] [i_1])))));
                                arr_40 [i_0] [i_0] [i_10] [i_0] [i_0] [i_10] [8] = (arr_9 [i_10 + 3] [15] [i_10 - 3] [i_10 + 1] [i_10 - 3] [i_10 + 2]);
                            }
                        }
                    }
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    var_26 = (max(var_26, 3407252309));
                    var_27 -= 1;
                }
                for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
                {
                    arr_45 [i_0] [i_0] [15] = (((((((arr_2 [i_0] [i_0]) >> (((arr_18 [i_0] [11] [i_0]) + 1260297915))))))) * ((13785 ? (arr_17 [i_0] [i_0]) : 928164183)));
                    var_28 = (~(arr_34 [i_12] [i_12] [i_12]));
                    var_29 = ((((-63643 < (((!(arr_44 [i_12] [11]))))))));
                }
                for (int i_13 = 0; i_13 < 17;i_13 += 1) /* same iter space */
                {
                    var_30 = (arr_1 [i_0] [i_0]);
                    var_31 = (!19184);
                }
                arr_48 [i_1] = (((arr_30 [i_1 + 3] [i_1 - 2] [i_1]) <= ((((arr_6 [i_1 - 2] [i_1]) >= (arr_30 [i_1 - 1] [i_1] [i_1 + 1]))))));
                var_32 = (min(var_32, (((((((arr_14 [i_1 + 3] [i_1 - 2]) ? (arr_14 [i_1 - 2] [i_1 + 1]) : (arr_14 [i_1 + 3] [i_1 - 1])))) * (1341374889 & 16))))));
            }
        }
    }

    for (int i_14 = 0; i_14 < 17;i_14 += 1)
    {
        arr_51 [i_14] = ((((arr_6 [i_14] [i_14]) != (arr_29 [i_14] [i_14] [i_14]))));
        var_33 = (max(var_33, ((((((!(arr_41 [i_14] [i_14]))))) > (((arr_41 [i_14] [i_14]) ? (arr_22 [i_14]) : (arr_41 [i_14] [i_14])))))));
    }
    var_34 = (((var_3 ? ((2577293565 ? 3366803112 : var_13)) : var_1)));
    #pragma endscop
}
