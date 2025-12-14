/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= 29;
    var_20 = var_9;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_21 = (max(var_21, (~318528608)));

        for (int i_1 = 4; i_1 < 6;i_1 += 1)
        {
            var_22 = 209;
            arr_4 [i_0] [i_0] = ((~(min((arr_2 [i_0]), var_12))));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_23 = var_17;
            arr_8 [i_2] [i_2] [i_2] = (var_7 && var_1);
            var_24 = ((~((3039156084 ? (arr_0 [i_0]) : var_6))));
            var_25 = (((arr_2 [i_0]) > var_5));
        }
        for (int i_3 = 3; i_3 < 6;i_3 += 1)
        {
            var_26 = (max((max(80, 2373827246)), (max(((-236 ? var_3 : 788001473)), (arr_7 [5] [5] [i_3])))));
            arr_12 [i_0] [6] &= ((((min(((min(var_3, 1871843585))), (788001466 ^ 909964580)))) ? var_7 : ((max(var_4, var_11)))));
        }
        var_27 = (arr_3 [i_0] [i_0]);
    }
    var_28 = 54775;
    #pragma endscop
}
