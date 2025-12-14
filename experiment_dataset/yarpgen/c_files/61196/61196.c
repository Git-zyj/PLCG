/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= -var_16;
    var_19 = (min(var_19, var_4));

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_20 = (min(var_20, (-var_14 | 13071568501453290044)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, 29));
                    arr_10 [i_2] [i_1] [i_0 - 2] [i_0] = var_12;
                    var_22 = (max(var_3, (min(0, ((51 << (((arr_6 [i_0] [i_0]) + 1677596870))))))));
                }
            }
        }
        var_23 ^= (max(5375175572256261571, -106));
        arr_11 [i_0 + 2] = ((var_12 - ((((!(((var_4 ? var_17 : var_16)))))))));
    }
    var_24 = (max(var_24, -109));
    #pragma endscop
}
