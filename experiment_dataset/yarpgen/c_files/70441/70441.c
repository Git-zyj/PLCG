/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= var_5;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0 + 1] = ((~(arr_1 [i_0])));
        var_11 = (max(var_11, (arr_2 [i_0])));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        var_12 = ((-0 + (arr_4 [i_1])));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_13 = (max(var_13, (49 && 17083817580935227230)));
            var_14 = (arr_4 [i_1]);
        }
        arr_9 [i_1] = 2962244410766522355;
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_13 [i_3] [i_3] = (((min((arr_10 [i_3]), var_4)) - ((~(9223372036854775780 && 890201485)))));
        var_15 = (max(var_15, (((var_2 * 9223372036854775807) ? 20 : 4716182071948804303))));
    }
    for (int i_4 = 3; i_4 < 13;i_4 += 1)
    {
        var_16 = ((17083817580935227230 ? ((var_6 ? ((var_2 ? (arr_6 [i_4] [i_4]) : (arr_8 [i_4] [i_4 - 2] [i_4]))) : (!0))) : (arr_14 [i_4 + 1] [i_4 - 3])));
        var_17 = (((((!(arr_12 [i_4 - 2] [i_4])))) > ((~(9558156030425747663 != 8888588043283803954)))));
        var_18 += var_3;
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                var_19 = (~0);
                var_20 += (-4 != 1);
                var_21 = (~-3031727124746346170);
            }
        }
    }
    #pragma endscop
}
