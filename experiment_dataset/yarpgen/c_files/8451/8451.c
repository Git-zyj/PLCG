/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((min((min(var_6, var_3)), var_12))) || (((var_2 || var_6) <= var_7))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = ((((((((2541684471155852802 >= (arr_0 [5]))))) * 15487398747059750928)) * (max(394928402094746562, ((1 | (arr_2 [9] [i_0])))))));
        var_18 = ((((((-25237 != var_11) ? (~var_0) : var_15))) & (min((arr_0 [i_0]), ((var_4 ? var_6 : var_1))))));
        arr_4 [i_0] = (~(var_12 / var_2));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] = (((-(arr_6 [i_1]))));

        /* vectorizable */
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            var_19 ^= (((var_7 ^ var_16) != (var_12 % var_14)));
            var_20 = var_9;
            var_21 = (!var_12);
        }
        for (int i_3 = 2; i_3 < 14;i_3 += 1)
        {
            arr_14 [i_3] [i_3] = (min((((var_14 ^ var_9) - var_3)), ((var_15 - (min(var_13, var_3))))));
            var_22 = ((min((arr_9 [i_1]), var_2)) << (((max((arr_12 [i_1] [10] [6]), 1580411907)) - 549624969315766010)));
            arr_15 [i_3] = (!((((arr_8 [i_3 - 2] [i_3 + 3] [i_3 + 3]) * var_9))));
            var_23 *= (((((((var_15 ? var_14 : var_2))) ? var_0 : (((67108863 / (arr_10 [10] [i_3])))))) * (((-((var_9 ? var_4 : (arr_9 [i_1]))))))));
        }
    }
    var_24 = var_11;
    var_25 = ((((var_11 || var_10) ? (2549581162907009903 + 446698468834505892) : (var_4 || var_3))) ^ var_1);
    #pragma endscop
}
