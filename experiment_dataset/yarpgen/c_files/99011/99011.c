/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!var_0);
    var_16 = (min(var_16, ((((min(((var_5 ? 39 : var_10)), var_10)) > (((min(var_10, var_11)) / (~var_10))))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (max((((~var_12) - (((min(39, 211)))))), (((var_3 * (arr_0 [i_0]))))));
        arr_4 [1] = (-(min(var_1, var_11)));
        arr_5 [i_0] [i_0] = (arr_2 [1]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_17 = (~var_12);
        var_18 = ((var_5 - (arr_6 [i_1])));
    }
    for (int i_2 = 1; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_19 = 221;
        var_20 |= ((((var_3 < ((10775 >> (21171 - 21152))))) ? ((-(arr_9 [i_2 - 1]))) : (((!(arr_8 [i_2 + 2] [i_2]))))));
        var_21 |= ((var_12 & ((((((min(var_12, var_9))) || (arr_6 [i_2 + 3])))))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 11;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_22 = var_11;
            arr_16 [i_3] = (((arr_12 [i_3]) > (((~(arr_9 [1]))))));
            var_23 = 226;
        }
        var_24 += (arr_15 [i_3] [i_3 - 1] [i_3]);
    }
    var_25 = (max(var_25, (min((((((min(var_10, var_13))) || var_14))), (min(var_5, (~21181)))))));
    var_26 = ((-(max((var_8 / var_6), ((205 ? 632084731 : var_6))))));
    #pragma endscop
}
