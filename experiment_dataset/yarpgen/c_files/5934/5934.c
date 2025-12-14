/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= ((((max(var_2, var_6))) ? (min((var_2 != var_11), (var_6 | var_7))) : ((min(var_8, (~var_1))))));
    var_14 = (min(var_14, ((max(((!(((var_1 ? 191 : var_7))))), (((159 / 81) <= -64)))))));
    var_15 *= ((((var_7 ? var_7 : var_4))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 = (((((8656709741898783663 ? (arr_0 [i_0]) : 64))) && (arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, (((((((arr_3 [15]) & var_5))) ? (((arr_7 [5]) ? (arr_7 [i_0]) : (arr_4 [i_2]))) : (arr_6 [10] [i_2] [i_2]))))));
                    var_18 = (max(var_18, (arr_0 [i_2 - 1])));
                    var_19 += ((arr_6 [i_2] [i_2] [i_2 - 1]) ? (arr_6 [13] [13] [i_2 - 1]) : (arr_6 [i_2] [i_2] [i_2 - 1]));
                    var_20 = var_7;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                {
                    var_21 = (((arr_2 [i_0]) ? -13219 : ((var_6 ? (arr_7 [i_0]) : (arr_5 [i_0])))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_22 *= ((-var_4 ? ((((arr_14 [i_3] [i_3] [i_3]) - var_1))) : ((511861162 ? var_12 : var_2))));
                                var_23 = (min(var_23, (((-(arr_9 [i_4] [i_4 - 1] [i_4]))))));
                            }
                        }
                    }
                    var_24 = (arr_10 [i_0] [i_0] [i_0]);
                }
            }
        }
        arr_19 [i_0] = (arr_10 [7] [i_0] [i_0]);
    }
    for (int i_7 = 2; i_7 < 8;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            arr_27 [i_7 + 2] = (((arr_23 [i_7 + 1]) ? (min(var_2, ((~(arr_0 [i_8]))))) : ((-65 ? ((~(arr_9 [i_7 - 1] [i_7 - 1] [i_7]))) : -65))));
            arr_28 [i_7] [i_7] = (min(((max(var_4, var_1))), (min(((((arr_7 [i_7]) ? -30979 : 3442))), -var_9))));
            var_25 = (((((205 ? (((arr_9 [i_7] [i_7] [i_7 - 2]) ? var_8 : 3385845194042185228)) : var_0))) ? 15347 : (((-15347 <= (var_6 != var_7))))));
        }

        for (int i_9 = 2; i_9 < 9;i_9 += 1)
        {
            var_26 = (((((arr_1 [i_7]) ? 190 : 21573)) < (arr_0 [14])));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 9;i_11 += 1)
                {
                    {
                        var_27 *= ((-((max((arr_6 [i_10] [i_10] [i_10]), (arr_14 [i_10] [i_7] [i_10]))))));
                        arr_36 [i_9] = ((((arr_18 [i_11 - 1] [i_11] [i_11 - 1] [i_11 - 1] [i_11] [i_11 - 1]) ? (arr_18 [i_11 + 1] [i_11 + 1] [16] [i_11 + 1] [i_11] [i_11 - 1]) : (arr_18 [i_11 + 1] [i_11] [i_11] [i_11 + 1] [i_11 + 1] [i_11 + 1]))));
                    }
                }
            }
            arr_37 [i_9] [i_9] [i_9 - 2] = ((-(max(744717345859434303, 32762))));
        }
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        var_28 -= (~var_6);
        arr_40 [i_12] [i_12] = ((((((arr_8 [i_12] [i_12]) ? (arr_8 [i_12] [i_12]) : -2455352068757583845))) ? (max(15347, 2941066588795390800)) : (~68)));
        var_29 = (~(((arr_15 [i_12] [i_12] [6]) / (arr_13 [16] [i_12] [15] [i_12]))));
        arr_41 [i_12] = ((((min((arr_5 [i_12]), (arr_18 [i_12] [i_12] [i_12] [i_12] [i_12] [14])))) ? (((arr_17 [i_12]) ? (arr_39 [i_12]) : (arr_17 [i_12]))) : (((!(arr_17 [i_12]))))));
    }
    var_30 = ((-var_10 ? ((3385845194042185249 ? var_5 : var_12)) : -28));
    #pragma endscop
}
