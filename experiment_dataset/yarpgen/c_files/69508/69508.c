/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = (2353663380 * -26472);
        var_13 = (max(var_13, ((+((((((arr_1 [i_0] [i_0]) ^ 2147483647))) ? (((arr_1 [i_0] [4]) ? 1 : (arr_1 [i_0] [i_0]))) : -8))))));
        var_14 = (((((-(max(1, (arr_0 [i_0] [i_0])))))) ? (min((min(2594207034, -2044502473)), 3343272934)) : (arr_1 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] = ((+(((arr_3 [i_0] [i_1]) ? 20009 : -2147483647))));
            arr_6 [i_0] [i_0] [i_1] &= (((min(-1152921504606846848, ((max(275540168, 1))))) != 65525));
        }
    }
    var_15 = ((((var_2 ? (min(-2147483647, var_8)) : var_0))) ? (((min(-2147483647, (-2147483647 - 1))) - (52878 - 2147483640))) : (((((1 ? var_1 : 3457024801))) ? (!21) : (min(1, 2147483647)))));
    #pragma endscop
}
