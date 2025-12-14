/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_15 = -91;
                                var_16 *= ((var_2 ? 203177813897441404 : (((((var_10 ? (arr_0 [2] [9]) : 6252302996915843671))) ? var_0 : (arr_6 [14] [2] [8])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_17 = (min(var_17, (~7777268614089550649)));
                                var_18 = 36;
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_8;
    var_20 = ((1147805630 ? -14995 : 11235913405690338487));
    var_21 ^= (min((((-2312653919328522425 ? -32468 : 65528))), var_5));
    #pragma endscop
}
