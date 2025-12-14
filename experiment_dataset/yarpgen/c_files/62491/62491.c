/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    var_15 = (((min(-865014919, (((-865014930 + 2147483647) << (((-865014906 + 865014911) - 5)))))) ^ 44030));

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_16 += (((((((((arr_2 [i_0]) || var_13))) + ((6555 ? -87 : 865014905))))) ? ((var_12 ? 865014914 : -89)) : (arr_2 [i_0])));
        var_17 *= (var_13 & -73);
        var_18 &= ((!(!-865014926)));
        var_19 = ((((((arr_0 [i_0]) >> (var_2 - 1498898064404053857)))) ? (min((arr_0 [i_0]), ((-865014919 ? 1 : (arr_0 [i_0]))))) : ((min((arr_1 [i_0 - 2] [i_0]), (arr_2 [i_0 + 2]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            var_20 = -865014930;
            arr_10 [i_2] [i_2 - 1] [i_2] = ((!(arr_7 [i_1] [i_2])));
            var_21 += ((!(arr_3 [i_1] [i_1])));
            var_22 = (((((var_6 ? var_4 : (arr_8 [i_2] [i_1] [i_2])))) ? (arr_8 [i_2] [i_2] [i_2]) : var_1));
        }
        arr_11 [i_1] = ((-((var_0 ? -107 : var_1))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_23 &= (arr_15 [i_3]);
        var_24 = (min((arr_12 [i_3] [i_3]), ((min((arr_15 [i_3]), 39474)))));
    }
    var_25 = (max(var_25, ((((((max(var_4, 865014919))) ? var_2 : (!var_0)))))));
    #pragma endscop
}
