/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [1] &= (min((((var_11 ? (-6 > 133693440) : (var_11 | var_0)))), ((-((var_11 ? var_5 : 101))))));
        var_12 *= (((((101 / 5412559472035233995) && var_3)) ? (((!(((104 ? var_6 : -47)))))) : (max(104, var_3))));
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        var_13 = ((((min(var_10, (~var_7)))) > ((5412559472035233995 ? (((var_1 << (var_4 - 37968)))) : 1))));
        arr_6 [i_1] [i_1 - 2] = ((-(((-104 ? 2147483647 : var_5)))));
        var_14 ^= var_8;
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    arr_11 [i_2 - 1] &= (~1);
                    arr_12 [21] [1] [21] = (max(-2147483647, (((var_4 & var_9) >> ((((var_6 ? var_11 : 65509)) - 189))))));
                    var_15 ^= (((((((-5412559472035233995 ? var_8 : var_11)) < ((((-2147483647 - 1) < -118)))))) < (-4925681633370055506 < 111)));
                    var_16 = (((((var_1 ? 2147483647 : (((var_7 ? -63 : -11)))))) ? -4099574281600308624 : ((max(((var_4 ? var_10 : -11)), (min(var_7, var_3)))))));
                    var_17 = (max(((~(min(5412559472035233976, var_10)))), (((((-4925681633370055499 ? -2147483647 : -1670648746)) + -var_8)))));
                }
            }
        }
        arr_13 [i_1] |= (((min((1 / var_11), (var_10 / var_6))) * (1670648746 / var_10)));
    }
    var_18 = var_11;
    #pragma endscop
}
