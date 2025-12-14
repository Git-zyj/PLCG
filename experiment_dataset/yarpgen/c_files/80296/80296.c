/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = min(-var_10, ((-(var_0 / var_14))));
    var_18 &= (var_14 >> var_3);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 = ((-(arr_1 [i_0])));
        var_20 = var_8;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_21 += ((2147522995 ? (min(-6521668777827045341, (arr_4 [6]))) : (((((arr_6 [i_1] [i_2] [i_2]) ? (arr_0 [i_2]) : var_15)) - -var_0))));
                    var_22 *= (((arr_6 [i_1] [i_1] [i_1 - 1]) ? ((min(var_8, var_0))) : ((var_2 >> (arr_1 [i_1])))));
                }
            }
        }
        var_23 = ((-57 ? (-57 * -64) : ((min(-47, var_4)))));
        var_24 = (((arr_3 [i_1]) >> (((~-376699678930469387) - 376699678930469381))));
        var_25 &= ((~(max(250, ((~(arr_0 [i_1 - 1])))))));
    }
    #pragma endscop
}
