/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_10 = (-2147483647 - 1);
                var_11 ^= ((-(arr_6 [i_0] [i_1] [i_1])));
            }
        }
    }
    var_12 = min(((var_1 ? (3 <= var_8) : 2)), 128);
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_13 = var_3;
                                var_14 = -var_9;
                                var_15 = (min(var_15, (arr_15 [i_5] [i_5] [i_4] [i_3] [i_2])));
                            }
                        }
                    }
                    var_16 = 242;
                    var_17 = (arr_13 [i_2] [0] [i_4]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 17;i_8 += 1)
        {
            {
                var_18 += (arr_23 [i_7] [i_8] [i_7 - 2]);
                var_19 = (((((+(((arr_24 [i_8]) ? var_4 : (arr_23 [i_7] [i_7] [i_7])))))) ? 128 : (min(var_6, var_6))));
            }
        }
    }
    var_20 = 4294967295;
    #pragma endscop
}
