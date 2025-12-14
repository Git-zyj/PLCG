/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((~(((arr_1 [i_0] [i_0]) | (arr_1 [i_0] [i_0])))))) ? (arr_0 [i_0]) : (((arr_0 [i_0]) ? (max(var_2, var_7)) : (arr_0 [i_0])))));
        var_10 = ((var_9 ? ((max((arr_0 [i_0]), (arr_0 [i_0])))) : (arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                arr_12 [i_3] [12] [i_1 - 2] = (arr_3 [i_1] [i_2]);
                var_11 = -683446445238923415;
            }

            for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
            {
                arr_16 [i_4] [i_2 + 1] [i_4] [i_4] = var_7;
                var_12 = -1913306497;
                arr_17 [i_4] = var_6;
                var_13 ^= (((((0 ? 67108863 : 127))) ? (arr_10 [i_1 - 1]) : var_4));
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
            {
                arr_20 [i_1 + 1] = var_8;
                arr_21 [i_5] [i_2] &= (((((var_1 ? var_5 : var_6))) ? (!var_3) : (arr_13 [i_1] [i_1] [12] [12])));
                var_14 = (((-(arr_13 [i_1] [i_1] [1] [i_1 - 2]))));
            }
            var_15 = ((2147483647 ? 4294967280 : 2147483624));
        }
        var_16 = (((((arr_10 [i_1]) * (arr_8 [6] [1] [1]))) * (arr_6 [i_1])));
        var_17 = -114;
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        var_18 += ((-(((arr_5 [i_6]) ? var_0 : (arr_5 [i_6])))));
        var_19 += (min((arr_6 [i_6]), 76));
    }
    var_20 = var_6;
    var_21 = ((var_5 ? (((min(var_8, var_0)))) : ((-(var_7 + var_4)))));
    var_22 = var_3;
    var_23 = (min(var_23, ((((((-1024 ? 531416256 : 1369683994))) * (var_8 / var_5))))));
    #pragma endscop
}
