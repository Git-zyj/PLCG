/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (arr_2 [i_1] [i_0])));
                var_18 = (max(var_18, (~var_12)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_19 ^= (min(4431, 0));
                            arr_11 [i_3] [1] [i_1] [i_3] = ((~(arr_5 [7] [i_1])));
                            var_20 += (82 != 18446744073709551593);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_21 = ((((arr_2 [i_4] [i_0]) | 9187343239835811840)));
                            var_22 = (max(var_22, (arr_16 [i_0] [i_4] [i_4] [2])));
                        }
                    }
                }
                var_23 = (!1660506439707468002);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            {
                var_24 *= ((((((arr_22 [0] [i_6] [0]) ? (-2147483647 - 1) : -123))) ? (((min(72057594037927936, 14)) ^ -485429253935475801)) : 108));
                var_25 = (min((((128 ? 0 : -1490731451))), (arr_19 [i_7] [i_6])));
                var_26 *= max((((((((arr_1 [i_7]) != var_0)))) & (((arr_15 [i_6] [i_6] [i_6]) ? (arr_17 [i_7] [i_6]) : 12903258131267057698)))), (((~((0 ? 126 : 25))))));
            }
        }
    }
    var_27 &= (max(((18446744073709551608 ? var_15 : (69773658 ^ 0))), (((136339441844224 ? 84 : var_16)))));
    #pragma endscop
}
