/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 = (arr_0 [i_0]);
        arr_2 [4] &= (!-var_16);
        var_19 = 16383;
        arr_3 [i_0] = -79;
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_20 = ((((((var_3 ^ 35184372088831) ? ((var_16 ? (arr_4 [0]) : (arr_6 [i_1] [i_1]))) : (((arr_6 [i_1] [i_1]) | var_16))))) ? 25824 : (((-6513547770143706886 | 16383) ^ (arr_7 [i_1 + 1])))));

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_21 = ((((var_2 ? (arr_4 [i_1 + 1]) : (arr_4 [i_1 - 1]))) | (~-16404)));
            var_22 += (min(79, -56));
        }
        var_23 |= (((((max((arr_8 [i_1] [i_1]), var_4)))) ^ (((arr_8 [i_1 + 3] [i_1 + 2]) ^ var_0))));

        for (int i_3 = 2; i_3 < 15;i_3 += 1) /* same iter space */
        {
            var_24 += var_12;
            var_25 &= (max((((((arr_6 [i_1] [i_1]) ? (arr_8 [i_1] [i_3 + 1]) : 52949)) ^ ((21530 ? 473770784 : 16403)))), (max(473770769, (arr_4 [i_1 - 1])))));
            arr_12 [i_1] &= ((((((arr_10 [i_3 + 1] [i_1]) ? var_1 : (arr_9 [i_1])))) ^ (((var_16 ^ var_3) ? (arr_7 [i_1]) : -4923197500135700255))));
        }
        for (int i_4 = 2; i_4 < 15;i_4 += 1) /* same iter space */
        {
            var_26 *= (((max(250140104, -473770767))));
            var_27 = (max(var_27, ((((((arr_7 [i_1 + 3]) ? (arr_15 [i_4 + 1] [i_4 + 1]) : (arr_15 [i_4 - 1] [i_4 - 2]))) | (((arr_15 [i_4 - 1] [i_4 - 1]) | (arr_15 [i_4 - 1] [i_4 - 1]))))))));
            var_28 = ((((min(var_1, (arr_14 [i_1 - 1] [i_4 - 2])))) ? (min(473770766, ((max((arr_10 [i_1] [i_1]), var_11))))) : (arr_4 [i_4])));
            arr_17 [i_1 + 3] [i_4] = (((max(-473770785, 16403))) ^ (arr_15 [i_4 - 1] [i_4 + 1]));
        }
    }
    var_29 ^= (max((~var_4), (var_4 ^ -1700911335)));
    var_30 = var_1;
    var_31 = var_6;
    #pragma endscop
}
