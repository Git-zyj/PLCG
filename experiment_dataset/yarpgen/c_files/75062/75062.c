/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= ((var_12 ? var_9 : var_2));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_14 = (min(var_14, (((-((0 << (((min((arr_1 [i_0]), (arr_0 [i_1]))) - 63947)))))))));
            var_15 -= 240;
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_16 = (max(var_16, var_11));
            arr_8 [i_0] [i_0] = (arr_5 [i_0]);
        }
        var_17 = var_3;
        var_18 |= ((-((((!(arr_4 [i_0])))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        arr_11 [i_3] = ((-(arr_4 [i_3])));
        var_19 = var_6;
        arr_12 [i_3] [i_3] = ((var_12 == (arr_4 [i_3])));
    }
    #pragma endscop
}
