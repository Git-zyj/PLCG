/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (((((arr_4 [i_0 + 2]) ? (arr_4 [i_0 - 1]) : (arr_4 [i_0 - 1]))) >= ((var_3 / (((1 ? var_7 : 16745)))))));
                var_20 ^= -19102;
                var_21 = (arr_4 [i_1 + 2]);
                arr_6 [i_0] [i_0] [14] &= (arr_4 [i_0]);
            }
        }
    }
    var_22 -= (((var_0 + 2147483647) >> (((((var_16 ^ var_1) ? var_11 : (var_1 ^ var_19))) - 61987))));

    /* vectorizable */
    for (int i_2 = 3; i_2 < 15;i_2 += 1)
    {
        var_23 ^= var_13;
        var_24 -= (((((1 || (arr_0 [i_2] [14]))))) & var_2);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_25 = (min(var_25, (1 | var_2)));
        arr_14 [i_3] [i_3] = ((-((var_2 / (arr_4 [18])))));
    }
    #pragma endscop
}
