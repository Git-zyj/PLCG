/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= (((((-25510 ? var_6 : (max(var_12, 17))))) ? var_10 : ((var_13 ? var_3 : 17820079420426486063))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 ^= 17820079420426486058;
                    var_18 |= ((((max(((663481273154457013 ? 785763715937513658 : var_4)), (min(10900153905490586034, var_13))))) ? ((min(19844, -2047))) : 32767));
                    var_19 = (i_0 % 2 == 0) ? (min(((((((arr_2 [i_0] [i_1 - 1]) >> (((arr_6 [i_1] [i_0]) + 11539)))) <= (((((arr_5 [i_0]) <= -28609))))))), 18395)) : (min(((((((arr_2 [i_0] [i_1 - 1]) >> (((((arr_6 [i_1] [i_0]) + 11539)) - 26954)))) <= (((((arr_5 [i_0]) <= -28609))))))), 18395));
                }
            }
        }
    }
    var_20 = (((var_7 * var_1) ? var_9 : ((((var_8 + var_11) ? (var_6 / var_6) : var_6)))));
    #pragma endscop
}
