/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            var_18 = -23;

            for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
            {
                var_19 = (!var_12);
                var_20 ^= (-8 + 18402);
            }
            for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
            {
                var_21 = (arr_6 [i_1 + 2] [i_1] [i_1 + 2]);
                var_22 = 2413500336622299729;
                arr_11 [i_3] = (arr_10 [i_0] [i_1] [i_1 - 1] [i_3]);
            }
            for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
            {
                var_23 = (max(var_23, ((((arr_8 [i_1 + 2] [i_1 + 1] [i_1 - 2] [i_1 - 1]) / (arr_13 [i_1 - 1] [i_1 + 1] [i_1 - 1]))))));
                arr_15 [21] [i_1] [i_4] = var_9;
                var_24 ^= (arr_4 [i_1 + 1] [2] [i_1]);
                arr_16 [i_0] [i_1 + 1] [18] [i_1 + 1] = (((1 != -79) < (arr_6 [7] [i_1 - 1] [7])));
            }
            for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
            {
                var_25 = ((-(((arr_9 [i_0] [i_0] [i_5] [i_0]) ? (arr_9 [i_0] [8] [i_5] [i_5]) : 4))));
                var_26 |= -598587695;
            }
        }
        var_27 = ((var_7 - (arr_9 [4] [i_0] [i_0] [i_0])));
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] = 197;
        arr_23 [i_6] [i_6] = -2413500336622299729;
        arr_24 [i_6] = ((((((arr_1 [i_6]) ? (arr_6 [i_6] [i_6] [7]) : (arr_1 [i_6])))) ? (((-(arr_1 [i_6])))) : ((~(arr_6 [i_6] [i_6] [i_6])))));
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
    {
        arr_28 [i_7] = (((((-(arr_20 [22] [i_7])))) % (max((arr_18 [i_7] [i_7] [1]), (arr_6 [i_7] [i_7] [22])))));
        arr_29 [i_7] [i_7] = ((7 ? (((arr_17 [i_7] [i_7] [9] [i_7]) ^ 28491)) : (arr_17 [i_7] [i_7] [i_7] [i_7])));
        var_28 = 2295830835;
    }
    for (int i_8 = 3; i_8 < 17;i_8 += 1)
    {
        var_29 *= -16;
        var_30 += ((-((((arr_3 [i_8] [i_8 + 2] [i_8 - 2]) == 4294967295)))));
    }
    #pragma endscop
}
