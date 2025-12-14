/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_1));

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_21 = 0;

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            var_22 = (min(var_22, (((0 || (arr_2 [i_0 - 3]))))));
            arr_6 [i_0] = min((var_17 >= 0), ((-13716 ? ((max(var_6, var_8))) : 65532)));
        }
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            var_23 = (0 ? -5 : 1);
            var_24 = ((-((var_5 ? 180 : ((12 ? var_15 : var_9))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_25 = ((-121 ? 2864461841198671647 : 247));
            arr_13 [18] [i_0] = (-9074195186928310160 / 113);
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            arr_16 [i_0] [i_0] [i_0] = 0;
            var_26 = var_13;
        }
    }
    var_27 ^= ((-2 ? var_13 : (((!(48529 ^ 127))))));
    var_28 = (!var_14);
    #pragma endscop
}
