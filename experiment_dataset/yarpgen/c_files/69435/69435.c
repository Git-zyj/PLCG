/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (max(((min(var_11, var_3))), (((max(var_2, 9223372036854775807)) - 5987596487668857324))));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_20 *= (((max((max(36075, (arr_0 [i_0]))), (max((arr_1 [i_0]), 56019)))) - (arr_0 [i_0])));
        var_21 = ((min(((var_7 ? (arr_1 [i_0]) : (arr_0 [i_0]))), (((arr_1 [i_0]) % 4294967295)))));
        var_22 *= 29467;
        arr_2 [i_0] [i_0] = min((((!((min(40654, 40652)))))), (max(29471, 9)));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_23 *= (min((((!((max(2775141364, 1)))))), (max(29450, -1))));
            var_24 ^= (arr_7 [i_1 + 2]);
            var_25 = (min(var_25, ((min(((~((40642 << (696383895 - 696383894))))), -127)))));
        }
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            var_26 = (min((arr_5 [10]), (((!(((arr_5 [i_3]) && 56019)))))));
            var_27 = (max((max(((min((arr_8 [i_1] [i_3 + 1] [i_3 + 2]), 0))), (arr_11 [i_1 + 1] [i_1] [i_1 + 1]))), (((-23242 || (((15363 ^ (arr_7 [i_3])))))))));
            arr_12 [i_1] [i_1] [i_1] = 1;
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_28 += ((((arr_4 [i_1]) ? (((arr_11 [i_1 + 2] [i_1 + 2] [i_1 + 2]) ? var_8 : (arr_10 [i_1]))) : ((min(150, 2927759949))))));
            var_29 = (min(var_29, ((((((!(arr_15 [i_1 - 1] [i_4] [i_1 - 1])))) >= ((max(var_16, (arr_15 [i_1 - 1] [i_4] [i_4])))))))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 12;i_6 += 1)
                {
                    {
                        arr_20 [i_1] [i_1] [i_1] [i_4] [i_5] [i_5] &= (((arr_4 [1]) || (arr_17 [i_5])));
                        var_30 = ((1 ? (((29469 & (arr_19 [i_6])))) : var_3));
                    }
                }
            }
        }
        var_31 += (min(((((3489744263 <= 1) - (((!(arr_7 [i_1]))))))), ((3598583423 ? 3 : ((156 ? -1 : (arr_10 [i_1])))))));
        var_32 = (max(var_32, var_9));
        var_33 = (max(31, ((29871 / (arr_16 [i_1 + 2] [i_1])))));
    }
    for (int i_7 = 3; i_7 < 12;i_7 += 1)
    {
        arr_24 [5] |= (!(arr_21 [i_7]));
        var_34 = (max((max(((max((arr_22 [i_7]), (arr_22 [i_7])))), (arr_23 [i_7 + 2]))), ((((((1367207347 ? 4252 : 127))) ? 16 : -5987596487668857307)))));
        arr_25 [i_7 + 3] |= (min((min((arr_22 [i_7 + 2]), (arr_21 [i_7 + 2]))), (((min(1, (arr_22 [i_7]))) | -1))));
        var_35 = (max(var_0, 0));
    }
    var_36 *= ((!(((var_5 ? ((max(-29, 1))) : var_11)))));
    #pragma endscop
}
