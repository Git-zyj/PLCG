/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            var_15 = (((((!((((arr_3 [5]) ? var_5 : var_10)))))) > (arr_0 [i_0 + 3])));
            arr_4 [0] [i_1] [i_1] = (((var_3 * var_14) / (((-(arr_3 [i_0 - 1]))))));
            arr_5 [i_0] [i_1] [i_1 + 1] = (arr_3 [i_0 - 1]);
            arr_6 [i_0] [i_0] [i_1] = ((arr_3 [i_0 - 2]) ? (((arr_3 [i_0 + 1]) ? var_3 : (arr_3 [i_0 + 1]))) : (((((arr_3 [i_0 + 4]) > (arr_3 [i_0 - 1]))))));
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 16;i_3 += 1) /* same iter space */
            {
                arr_12 [i_0] [i_0] [i_0] = ((((arr_11 [i_0 + 1] [i_3 + 1] [i_0 + 1] [i_3 - 1]) || (arr_11 [i_0 + 1] [i_3 - 1] [i_3] [i_3 + 1]))) || ((min(var_10, (arr_11 [i_0 + 4] [i_3 + 1] [i_3 + 1] [i_3 + 1])))));
                arr_13 [i_0] [i_0] [i_3 + 1] = (min(((var_6 ? (arr_10 [i_3] [i_3] [i_3 + 1] [i_3 - 1]) : (arr_10 [i_3] [3] [i_3 - 1] [i_3 - 1]))), (((arr_11 [i_3] [i_3] [i_3 + 1] [i_3 + 1]) ^ var_1))));
                var_16 = (57378 != 52674);
            }
            for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
            {
                var_17 = ((!(((var_8 ^ (arr_10 [i_0 + 4] [i_4] [i_0 + 4] [i_4 + 1]))))));
                arr_17 [i_0] [i_2] [i_2] [i_4] = (((((var_0 < ((((arr_3 [i_4]) + var_13)))))) % ((((arr_15 [i_0] [i_0]) || (-524288 / 4371699752835862673))))));
            }
            for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
            {
                var_18 = ((((((arr_10 [i_0 - 2] [i_0 - 2] [i_5] [i_5 - 1]) ? (arr_10 [i_0 - 2] [i_0 - 2] [i_5] [i_5 - 1]) : (arr_10 [i_0 - 2] [i_2] [6] [i_5 - 1])))) || ((((arr_10 [i_0 - 2] [i_2] [i_2] [i_5 - 1]) ? (arr_10 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_5 - 1]) : var_4)))));
                var_19 = ((((!(arr_1 [i_5 + 1]))) && (((4371699752835862673 ? 8158 : 2417378702310127778)))));
            }
            arr_21 [i_0] = (((((arr_11 [i_0 + 4] [i_0] [i_0] [i_2]) >> (var_4 + 8159514620113699945))) * (!var_8)));
            arr_22 [i_2] [i_2] [i_0] = (((arr_19 [i_0] [13] [i_0] [i_0]) % (((var_9 || 4371699752835862676) * (arr_0 [i_0 + 2])))));
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            arr_26 [i_0] [i_0] = var_3;
            arr_27 [i_6] [i_0] = (arr_11 [i_6] [i_6] [i_6] [i_0]);
            var_20 ^= (((((arr_15 [i_0 - 1] [i_0 + 2]) ? (!var_8) : (arr_18 [i_0 + 4] [i_0 - 2] [i_0 - 2] [i_0 + 2]))) << (-var_2 + 221)));
            var_21 *= (arr_8 [i_0 + 3] [i_0 + 3] [i_0]);
        }
        var_22 = (((((max(var_2, (arr_14 [1] [1] [i_0] [i_0]))) ? (((arr_16 [1] [i_0 + 1] [i_0 + 1]) ? var_11 : var_1)) : (arr_8 [i_0] [i_0] [i_0])))));
        arr_28 [i_0] [i_0] = (!(arr_24 [i_0 + 4] [i_0]));
    }
    for (int i_7 = 3; i_7 < 17;i_7 += 1)
    {
        var_23 = ((((min((arr_30 [i_7 - 3]), (arr_30 [i_7 - 2])))) == (((arr_29 [i_7 + 1]) ? (arr_29 [i_7 - 1]) : (arr_29 [i_7 + 1])))));
        arr_31 [i_7] = ((-((-(arr_29 [i_7 - 3])))));
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 17;i_9 += 1)
            {
                {
                    var_24 = (max(var_24, ((max((max((arr_36 [i_9 + 2] [i_8 + 2]), var_9)), (((160 ? 1891505633 : -4371699752835862673))))))));
                    arr_38 [i_8] [i_7] = ((+((((arr_34 [i_9 - 1] [i_7 + 1] [i_9 - 1]) > (arr_34 [i_9 + 2] [i_7 - 3] [i_9 + 2]))))));
                    arr_39 [i_7] [i_8] [i_9] = ((var_12 ? ((var_8 ? (arr_32 [i_8] [i_8]) : (arr_37 [i_9 + 1] [i_9 + 1]))) : ((~(arr_34 [i_9 + 2] [i_8 - 1] [i_7 - 1])))));
                }
            }
        }
        var_25 = ((!(arr_30 [i_7 - 3])));
    }
    var_26 = ((!((((var_0 || var_14) ? (var_6 || var_5) : ((var_7 ? var_7 : 279712905)))))));
    #pragma endscop
}
