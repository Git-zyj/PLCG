/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_10 = (~var_4);
        var_11 ^= (max(4692042273350462577, ((max((arr_1 [i_0] [i_0]), ((-(arr_1 [6] [12]))))))));
        arr_2 [11] = ((-(max(var_8, (var_3 * 7376000343936578231)))));
    }

    for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_12 = (max(var_12, ((((arr_3 [i_1]) ? ((4729 % (arr_3 [i_1 + 2]))) : ((-((~(arr_4 [i_1]))))))))));

        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            var_13 = -var_6;
            var_14 = (var_8 << (((max((min((arr_5 [15] [i_2]), var_0)), (arr_3 [11]))) - 13279996)));
        }
        var_15 -= (!var_5);
        var_16 = (max(var_16, (-316723654 & 56)));
        var_17 = ((((((arr_6 [7]) ? (((arr_6 [i_1]) % var_5)) : 26501))) ? (arr_6 [i_1 + 2]) : ((var_9 ? (arr_5 [i_1] [i_1 + 1]) : (~64506)))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 18;i_3 += 1) /* same iter space */
    {
        var_18 *= (arr_3 [i_3 + 2]);

        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            var_19 = (((arr_4 [i_4 - 1]) > -124));
            var_20 = var_5;
        }
        var_21 = (((arr_10 [19]) ? (arr_10 [i_3 + 2]) : (arr_9 [i_3 + 2] [i_3] [1])));
    }
    var_22 = var_2;
    #pragma endscop
}
