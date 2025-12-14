/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_13 ^= (3366453532 % 872455535);
                    var_14 = (min(var_0, (-var_5 | -124)));
                }
            }
        }
    }

    for (int i_3 = 2; i_3 < 15;i_3 += 1)
    {
        var_15 ^= (((((-(arr_3 [12] [i_3 - 1])))) || ((((56 ? var_0 : (arr_5 [14] [i_3] [i_3])))))));
        var_16 ^= (18446744073709551615 || 28);
        arr_8 [6] = 5256;
    }
    var_17 = -108;
    var_18 = var_7;
    var_19 = var_0;
    #pragma endscop
}
