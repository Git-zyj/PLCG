/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 -= (min(((((((21 ? 836079300 : 1))) ? ((var_10 ? 3090460777446644282 : (arr_6 [0] [i_1]))) : var_3))), var_1));
                    var_21 = (min(var_21, (((~(arr_5 [i_1] [i_2]))))));
                    arr_7 [i_0] = ((((((arr_0 [i_0 - 1]) ? (arr_5 [i_0] [i_0]) : ((~(arr_2 [i_0] [i_1])))))) || (((var_2 ? (arr_2 [i_0 - 1] [i_0 + 1]) : (arr_4 [i_0]))))));
                    var_22 = ((~(min(var_7, (arr_0 [i_0 + 1])))));
                }
            }
        }
        var_23 ^= (((arr_2 [i_0] [i_0 + 1]) ? ((((((arr_5 [i_0] [i_0]) ? var_1 : (arr_2 [i_0] [0])))) ? (arr_2 [i_0 + 1] [i_0 + 1]) : (max((arr_3 [i_0] [i_0 - 1] [i_0]), (arr_6 [4] [i_0 - 1]))))) : (((~(((arr_1 [4]) ? var_18 : (arr_2 [i_0] [10]))))))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_24 = (min(var_24, (((-((-(arr_6 [6] [6]))))))));
        arr_11 [i_3] [i_3] = ((((max((arr_8 [i_3]), var_12))) ? -var_11 : (((arr_8 [i_3]) ? (arr_6 [i_3] [i_3]) : (arr_10 [i_3] [i_3])))));
        var_25 = (((-836079318 ? 1 : 0)));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_26 += ((~((((~(arr_14 [i_4] [i_4])))))));
        var_27 = ((((((~(arr_13 [i_4] [i_4]))) ? ((18446744073709551615 ? var_11 : var_5)) : (((max(var_0, (arr_13 [16] [i_4])))))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    arr_20 [i_5] = (arr_12 [i_4] [i_5]);
                    arr_21 [i_4] [i_4] [i_4] [i_6] = (arr_17 [21] [1]);

                    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                    {
                        var_28 += var_7;
                        var_29 = (max(var_29, ((-(max(0, 18446744073709551615))))));

                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            var_30 += (((((((arr_18 [i_5] [10] [i_5] [19]) ? (arr_25 [i_4] [i_5] [22] [i_6] [i_7] [i_8]) : (arr_12 [i_4] [20]))) | 0)) >= -var_3));
                            var_31 = (min((min((arr_23 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]), (max(var_14, var_13)))), var_13));
                            var_32 = (min(var_32, ((max((!var_11), (max((~var_6), ((max((arr_17 [i_4] [i_8]), (arr_14 [i_5] [i_7])))))))))));
                            var_33 = (max(var_33, (836079311 & 55)));
                        }
                        var_34 |= var_13;
                        var_35 -= (var_8 % -var_13);
                    }
                    for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                    {

                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            arr_35 [i_4] [i_4] [i_6] [16] [i_4] = ((((min(((~(arr_15 [i_5]))), ((var_19 ? (arr_16 [i_4] [i_4]) : var_2))))) ? (((((-(arr_14 [i_4] [5])))) ? ((var_4 ? var_7 : (arr_31 [i_6] [i_10]))) : (2474612662 - -836079325))) : (!var_7)));
                            arr_36 [i_4] [i_4] [i_4] [i_5] [i_4] = (max(-836079296, (arr_27 [i_9] [i_6])));
                        }
                        var_36 *= ((((1 ? 1 : -836079331))) <= ((17499927977027071286 ? 0 : 38673)));
                        var_37 = (max(var_37, ((min((var_18 % 836079309), 836079320)))));
                        var_38 += (arr_33 [i_9] [i_9] [i_6] [1] [i_4] [i_4]);
                        var_39 = ((((((var_4 + (arr_32 [i_4] [i_9]))))) ? (((((((arr_27 [i_6] [i_9]) - (arr_33 [8] [i_4] [i_5] [i_6] [i_6] [i_9])))) || 19399))) : (min(var_16, ((var_7 ? (arr_22 [i_6] [i_6] [i_6] [i_6]) : (arr_34 [i_4] [i_4] [18] [18] [i_4])))))));
                    }
                }
            }
        }
        var_40 = (arr_12 [i_4] [i_4]);
        arr_37 [i_4] [i_4] &= var_18;
    }
    var_41 = (~var_3);
    var_42 = var_5;
    var_43 ^= ((-1840 ? (((9223372036854775786 ? 1 : (max(836079330, -62281396))))) : (max(var_11, var_16))));
    var_44 &= var_5;
    #pragma endscop
}
