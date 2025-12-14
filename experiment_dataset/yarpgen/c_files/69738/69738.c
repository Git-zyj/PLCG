/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [10] &= (((arr_5 [i_1] [i_0]) <= ((((arr_5 [1] [i_1]) || 15363537886068646550)))));
            var_13 ^= (arr_0 [i_0]);
        }
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            var_14 ^= ((((((var_4 + 2147483647) >> (-1567195873 + 1567195903)))) + 8495375802476777427));
            arr_10 [1] [i_0] = ((var_2 ? (arr_9 [i_2 + 1] [i_2 + 3]) : (arr_9 [i_2 + 2] [i_2 - 1])));
            var_15 = -var_12;
        }
        arr_11 [7] = ((+((-32751 ? (arr_8 [i_0] [i_0]) : (-2147483647 - 1)))));
        arr_12 [i_0] [i_0] = ((var_8 != (arr_7 [i_0] [i_0] [i_0])));
        arr_13 [i_0] &= var_2;
        var_16 = ((var_6 / (((arr_5 [i_0] [i_0]) * var_4))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_17 = (max(var_17, (arr_5 [i_3] [i_3])));
        var_18 &= (arr_16 [i_3]);
        var_19 -= arr_5 [i_3] [i_3];
    }
    var_20 = var_10;
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 15;i_6 += 1)
            {
                {
                    arr_27 [i_4] [i_5] = var_0;
                    arr_28 [i_4] = (((((((((((-2147483647 - 1) + 2147483647)) + 2147483647)) >> (((arr_18 [i_4]) - 6)))))) ? ((((min(var_12, 2121961696))) * (arr_17 [i_4]))) : (-32751 != -32751)));
                }
            }
        }
    }
    #pragma endscop
}
