/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((~((2989528202151720188 ? var_10 : var_1)))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_13 = (max(var_13, ((min((((((arr_0 [0]) ? 21673 : (arr_0 [2]))) / (arr_3 [i_0]))), ((~(((arr_3 [i_0]) ? 65306 : (arr_1 [i_0]))))))))));
        var_14 = (max(var_14, (((var_6 ? ((min((arr_3 [i_0 - 1]), (((arr_2 [i_0 - 2] [i_0 - 2]) ? 60 : var_7))))) : (((65306 * (arr_2 [i_0 - 2] [i_0])))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    {
                        var_15 -= 259;
                        var_16 += (arr_8 [i_1] [i_1] [i_1]);
                    }
                }
            }
        }
        arr_14 [i_1] [i_1] = (((arr_10 [i_1] [i_1] [i_1] [i_1]) || 1195532950));
    }
    var_17 = ((-47 ? ((((var_11 << (65 - 63))) | (var_9 & var_1))) : ((((min(var_3, var_3))) ? (-21674 ^ var_11) : var_11))));
    #pragma endscop
}
