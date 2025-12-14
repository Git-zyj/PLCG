/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = -23055;
                var_16 -= 16899;
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_6, (arr_0 [i_0])));
                                var_18 += (((((-(arr_7 [i_2] [i_2 + 1] [i_2 + 1])))) ? ((28657 ? -1682104009 : var_5)) : ((((min(-23055, -23055))) ? 3196959327 : ((1 ? 1 : 1))))));
                                var_19 = (((((((((arr_6 [i_2 - 1] [i_3] [i_2 - 1] [i_1] [i_0 - 4]) ? (arr_5 [i_0]) : 1))) ? ((min(1, 1))) : -8797))) ? 1 : ((((arr_3 [i_2]) && 4001)))));
                                var_20 = (((((arr_4 [i_2 - 2] [1] [8]) ? (arr_4 [i_2 - 2] [i_2] [i_2]) : (arr_4 [i_2 - 2] [i_2] [i_0 - 4]))) >> (4 < 1)));
                                var_21 += 480;
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 += 7020;
    var_23 = 4294967295;
    var_24 &= -15789;
    #pragma endscop
}
