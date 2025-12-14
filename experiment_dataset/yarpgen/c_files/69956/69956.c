/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = ((var_1 / var_11) + ((max(((((arr_0 [i_0]) < var_6))), -52430))));
        var_12 = var_8;
        arr_4 [i_0] = var_1;
        var_13 *= (((min((arr_0 [i_0]), ((var_10 - (arr_2 [0] [0]))))) - (((~(arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_7 [i_1] = (arr_6 [13] [i_1]);

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_14 = (max(var_14, ((((-12219 * 0) ? ((-(arr_6 [i_1] [i_1]))) : var_2)))));
            var_15 = -var_7;
            var_16 = (max(var_16, (((~((+((((arr_6 [i_1] [i_1]) && (arr_5 [i_2] [i_1])))))))))));
            var_17 = (-var_10 * (((((arr_8 [i_1] [i_2] [11]) - var_1)) - ((min((arr_9 [i_2] [i_2] [i_1]), (arr_6 [i_2] [i_1])))))));
            var_18 = ((~(~var_7)));
        }
        var_19 = (max(var_19, (((((~(arr_9 [i_1] [i_1] [i_1]))) - (((((arr_9 [i_1] [i_1] [i_1]) > var_0)))))))));
        arr_10 [i_1] [i_1] = (arr_6 [i_1] [i_1]);
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {
        var_20 = (max((((arr_11 [i_3]) < var_10)), (((!var_2) == var_6))));
        var_21 = var_3;
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] = (!9223372036854775798);
        arr_17 [i_4] = (((arr_15 [i_4]) - (arr_13 [i_4])));
        var_22 = ((var_1 ? (((((var_2 ? 2143 : 772075459)) - var_9))) : (min((arr_14 [i_4]), (arr_13 [i_4])))));
        arr_18 [i_4] = ((((-((((arr_13 [18]) >= (arr_11 [i_4])))))) >= ((-(arr_12 [i_4])))));
    }
    var_23 *= ((~(~var_11)));
    var_24 = ((~(var_8 + var_2)));
    var_25 = var_1;
    #pragma endscop
}
