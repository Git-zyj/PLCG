/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0])));
        var_19 = (min(var_19, ((((var_4 - 219) ? (((var_4 ? 1 : (arr_1 [i_0])))) : ((var_11 ? 1 : (arr_0 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_20 ^= 1485431256;
        var_21 = (max(var_21, var_7));

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_8 [i_1] [i_1] [i_1] = (((arr_6 [i_1] [i_1] [i_2]) == var_4));
            var_22 *= 71;
            var_23 = 11;
            var_24 = (((arr_4 [i_2]) / ((((min(var_1, (arr_7 [i_1] [i_2])))) ? (arr_4 [i_2]) : (((var_16 ? -79 : var_3)))))));

            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                var_25 ^= (255 > 12844);
                arr_11 [i_3] [i_2] [i_1] = ((((min((arr_7 [i_1] [i_2]), (arr_4 [i_1])))) ? ((var_9 ? 1240339825 : 0)) : (arr_4 [i_1])));
            }
        }
    }
    var_26 = ((((((192 ? var_18 : var_3)) | 2559)) <= (~32600)));
    var_27 = (max(0, 1));
    #pragma endscop
}
