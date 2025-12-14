/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((var_9 * (max((-1768 & var_6), var_1))));
        var_15 = ((((((min(14179921253069484429, (arr_2 [i_0])))) ? (1768 - 56996) : (((arr_1 [11] [11]) ? 1778 : var_7)))) + -8525));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_7 [i_1] = 1;
        arr_8 [i_1] = (min(((((((1768 ? 1088952985 : 1))) < ((8540 ? 9233206741011915062 : 56996))))), (max(((20662 ? 12477 : var_10)), ((max((arr_5 [i_1]), (arr_5 [i_1]))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_16 = (((!-30874) && (!1)));

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_17 = (min(var_17, (!12477)));
            var_18 -= (1772 < (arr_11 [15] [i_2] [i_2]));
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_19 = -45391;
        var_20 = ((-(!56996)));
    }
    var_21 = (~var_3);
    var_22 -= var_0;
    var_23 -= var_11;
    #pragma endscop
}
