/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!((min((~99), (min(0, var_10)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, ((max((arr_0 [i_0]), (min((arr_3 [i_1 - 1] [i_1 - 1] [i_2 + 1]), var_7)))))));
                    var_21 = (max(var_21, 38979));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_22 = (-9223372036854775807 - 1);
        arr_11 [1] = (((arr_8 [11] [i_3]) * (arr_8 [i_3] [i_3])));
    }
    for (int i_4 = 1; i_4 < 12;i_4 += 1)
    {
        var_23 ^= (max((arr_13 [i_4 + 1]), (arr_13 [i_4 + 2])));
        var_24 += ((max((arr_13 [i_4 - 1]), (arr_13 [i_4 - 1]))));
        var_25 = (min((((-((65520 ? var_12 : 65515))))), -31));
    }
    #pragma endscop
}
