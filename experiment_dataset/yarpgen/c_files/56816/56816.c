/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 4194303;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 = (((1 ? 3 : -65)));
        var_15 = var_4;
        var_16 = (max(var_16, 3));
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        var_17 *= ((min(30868, 4294967289)));
        var_18 = (~4294967281);
        arr_5 [i_1 + 1] = (((max(9223372036854775807, 4294967277))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 15;i_3 += 1)
            {
                {
                    arr_12 [i_3] [i_3] [i_3 - 4] = 1955487918;
                    var_19 = (max(var_19, (arr_10 [i_3 + 3] [i_1] [i_1])));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_20 = (arr_16 [i_4]);
        var_21 = (arr_13 [i_4] [i_4]);
    }
    #pragma endscop
}
