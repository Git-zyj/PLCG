/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_10 = (max(var_10, 253969419877894195));
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_11 = (max(var_11, (arr_1 [i_1 - 1])));
                        var_12 = (max(var_12, ((((1 != 1) ? (arr_5 [i_2]) : ((((1 ? -5 : -52)) * ((min(52, (arr_3 [i_1 - 2] [i_3])))))))))));
                        var_13 *= 51;
                        var_14 |= ((0 ? ((((max((arr_9 [i_2] [i_2] [i_1]), 4))) ? 13 : 3828901856822702966)) : 18));
                    }
                }
            }
        }
        arr_13 [i_0] |= (max(9223372036854775807, ((max((arr_0 [i_0]), (arr_0 [i_0]))))));
        var_15 *= (min(-1, (max(1573271298, 127))));
        arr_14 [i_0] |= (max(((((arr_3 [6] [i_0]) ? (((arr_1 [i_0]) ? 48045 : (arr_10 [i_0] [8] [10]))) : -127))), ((~(max((arr_1 [i_0]), 0))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        arr_17 [i_4] [i_4] |= ((-19 ? (arr_16 [i_4] [5]) : (arr_16 [i_4] [i_4])));
        var_16 ^= (arr_16 [i_4] [i_4]);
    }
    var_17 *= ((var_0 ? ((-((max(var_0, var_3))))) : (max(var_1, ((max(1, -1)))))));
    #pragma endscop
}
