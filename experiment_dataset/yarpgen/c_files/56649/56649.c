/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= ((var_16 != (max(var_10, 252))));
    var_19 ^= var_16;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = (((arr_4 [i_0] [i_0] [i_0]) * -6));
            var_20 = (arr_4 [i_0 + 1] [i_0] [i_0]);
            var_21 = (max(var_21, -6));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_22 = (min(var_22, -5));
            arr_8 [i_0] [i_0] = var_14;
            arr_9 [i_0] = 5;
            var_23 = (~var_7);
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
        {
            var_24 = (max(var_24, 5));
            arr_13 [i_0] [i_0] [i_0] = -27;
            arr_14 [i_0] [i_3] [i_0] = ((((((arr_12 [i_0] [i_0]) ? 5 : var_0))) ? (arr_7 [i_0 - 1] [i_0 - 1] [i_3]) : 5));
            var_25 = -6;
        }
        var_26 *= (((arr_11 [i_0 - 1] [i_0 + 1]) <= (arr_11 [i_0 - 1] [i_0 + 1])));
        var_27 = (min(var_27, (arr_2 [12])));
        var_28 = (max(var_28, var_0));
        var_29 ^= (((arr_1 [i_0 + 1]) != (arr_1 [i_0])));
    }
    #pragma endscop
}
