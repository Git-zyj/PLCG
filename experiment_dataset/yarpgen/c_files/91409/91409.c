/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 *= ((~((-(arr_6 [1] [i_1] [1])))));
                    arr_10 [i_0] = (((arr_5 [i_0] [i_0] [i_2]) + (((((((arr_6 [i_0] [i_1] [i_1]) & var_11))) ? 4128128288 : (arr_3 [i_0] [i_0]))))));
                }
            }
        }
    }
    var_17 = (max(var_17, (~4294967279)));
    var_18 = (((((((var_5 ? var_9 : -11427)) * (78 / 67108863)))) ? (((((var_14 ? var_4 : var_14)) == var_0))) : (((var_3 ? var_8 : var_13)))));

    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_19 = ((var_2 ? ((((arr_11 [22]) <= (((arr_11 [i_3]) << (4294967292 - 4294967281)))))) : (min(((max(-25991, var_7))), (((arr_11 [i_3]) | (arr_11 [i_3])))))));
        var_20 = (((((arr_12 [23]) > (arr_11 [i_3]))) ? var_1 : ((max((var_11 <= var_5), (((arr_12 [i_3]) ? (arr_11 [i_3]) : 7803992907510549126)))))));
        arr_13 [22] [i_3] = ((11707 ? 170 : 4611686018427387840));
    }
    #pragma endscop
}
