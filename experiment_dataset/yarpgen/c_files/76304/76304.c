/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_11 = (max(var_11, (59 < var_3)));
        var_12 *= ((!((max(109, 2488269020534323809)))));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        var_13 = (max(var_13, ((max((((arr_2 [i_1 + 3]) ? (arr_2 [i_1 + 3]) : var_4)), var_10)))));

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_14 += (((var_2 < var_4) ? (~1) : (max(109, var_0))));
            var_15 = (max(var_15, (arr_6 [i_2] [i_1 + 2] [i_2])));
            var_16 ^= ((~((var_8 ? 109 : (109 / 511)))));
            var_17 = (max((max(3362970371, (18446744073709551601 * var_9))), var_2));
        }
        var_18 += (-1 ? (((var_1 >> (var_1 - 27221)))) : (arr_2 [i_1]));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    var_19 ^= -1;
                    var_20 = (min(var_20, 1));
                }
            }
        }
        arr_12 [i_1] [i_1] = ((((((((-(arr_11 [i_1] [15] [i_1 + 3] [15])))) ? (((arr_11 [i_1 + 1] [i_1] [i_1] [i_1 + 3]) - var_1)) : (((arr_2 [i_1]) ? (arr_2 [i_1]) : (arr_6 [i_1] [13] [i_1])))))) && ((max((min((arr_2 [i_1]), 15272790677746907037)), ((var_4 ^ (arr_7 [i_1 + 3] [i_1] [i_1]))))))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 6;i_5 += 1)
    {
        arr_16 [i_5] = (((((arr_7 [17] [i_5] [i_5]) - -14)) - (arr_8 [2])));
        var_21 = 104;
    }
    var_22 -= var_6;
    var_23 = var_10;
    var_24 = var_6;
    #pragma endscop
}
