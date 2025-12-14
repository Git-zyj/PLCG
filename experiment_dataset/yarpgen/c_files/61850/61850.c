/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((((max(var_12, var_8))) ? (((34 ? -2411 : 107))) : (min(231, var_3))))) ? ((((((var_11 ? 274877874176 : var_7))) && (((245 ? var_12 : 18446743798831677432)))))) : ((min(var_6, (0 || var_5))))));
    var_16 = ((!(((var_12 ? (~var_6) : (max(var_6, 274877874176)))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (max((max((57838 + -1723928627), ((min(91, (arr_0 [i_0])))))), (((((arr_1 [i_0] [i_0]) ^ 7687))))));
        arr_3 [i_0] [i_0] = ((!((((((arr_1 [0] [i_0]) || 4561869614449992380)) ? (min(var_1, var_2)) : (10616288774939998098 != 1))))));
        arr_4 [i_0] [i_0] = var_9;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = (((((((((arr_5 [i_1]) << (57828 - 57816)))) ? 7830455298769553496 : (max(var_0, var_5))))) ? ((max(var_13, (min(var_10, 255))))) : (((((((arr_5 [i_1]) ? 37 : (arr_0 [i_1])))) && (((65535 ? -1 : 57837))))))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_12 [i_1] = (arr_1 [i_1] [i_1]);
            arr_13 [i_1] [i_2] [i_1] = (((~(arr_1 [i_1] [i_1]))));
            arr_14 [i_1] [i_2] [i_2] = (!7757016598750771082);
            arr_15 [i_1] [i_1] [i_1] = (((arr_5 [i_1]) ? var_14 : (arr_5 [i_2])));
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                {
                    arr_22 [i_1] [0] [0] = ((226 ? var_13 : (max(10616288774939998112, (~7707)))));
                    arr_23 [i_1] [i_1] [i_1] = ((((max(13565672808943053749, 7240045337857510369))) ? -7650 : ((((209 ? var_3 : var_3)) | ((((arr_8 [i_1] [i_3] [i_4]) & (arr_9 [i_1]))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_29 [i_5] [3] = (-32767 - 1);
                                arr_30 [i_1] [i_1] [4] [i_1] [i_1] [i_1] [i_1] = ((((max((7667 > var_6), 193))) < ((((7667 ? var_9 : 274877874176))))));
                            }
                        }
                    }
                    arr_31 [i_4] [i_3] [i_1] = (((((var_4 ? ((min(21394, 163))) : ((var_13 << (-7636 + 7643)))))) ? (((((arr_21 [i_3]) ? var_10 : var_9)) ^ (~var_14))) : (((((arr_19 [2] [i_3] [3]) && (arr_24 [i_1] [i_1]))) ? (arr_27 [i_4 + 1] [i_4 - 1] [0] [i_4 + 1] [i_4 + 1]) : var_7))));
                    arr_32 [i_1] [i_3] [i_1] = var_10;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
    {
        arr_36 [i_7] = (arr_20 [i_7] [i_7]);
        arr_37 [i_7] = (((8 < (arr_20 [i_7] [0]))) ? -1723928627 : 14452969029622039797);
        arr_38 [i_7] = ((7661 ? ((var_5 ? var_11 : -7677)) : 452317426));
        arr_39 [i_7] = ((7714 < var_13) | ((2147483637 ? var_5 : var_14)));
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                {
                    arr_48 [i_8] [2] [i_8] = 57835;
                    arr_49 [i_8] [i_8] [i_8] = ((((max(((~(arr_9 [i_8]))), 22168))) ? 6 : ((((max(var_14, 9796))) ? 2147483647 : (((arr_10 [i_9] [i_10]) ? 11065564637344570331 : var_13))))));
                    arr_50 [i_9] [i_10] = 0;
                    arr_51 [i_8] [i_9] [i_10] = (~var_1);
                }
            }
        }
        arr_52 [i_8] = (~var_9);
        arr_53 [i_8] [i_8] = (((max((!0), (min(27773, 1723928619))))) && (((((((arr_18 [i_8] [i_8] [i_8]) ? -20238 : (arr_34 [i_8])))) ? var_3 : ((((arr_8 [i_8] [i_8] [i_8]) ? var_14 : 1)))))));
        arr_54 [i_8] [i_8] = ((max(((var_5 + (arr_16 [i_8] [i_8]))), var_6)));
        arr_55 [i_8] [1] = (max((max(((max(30286, 56009))), ((7262 ? var_2 : var_0)))), ((196 + (var_1 * var_13)))));
    }
    #pragma endscop
}
