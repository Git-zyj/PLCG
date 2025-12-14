/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 += ((245 ? (!10) : (arr_3 [i_0] [i_0])));
        var_14 = ((((max((((arr_0 [i_0] [i_0]) ? var_4 : 245)), (((6600 ? 9 : (-127 - 1))))))) ? (arr_0 [i_0] [i_0]) : var_8));
        var_15 = (-66 > 6600);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] = (((min(((var_10 ? 33220 : 25511)), ((9 ? 65530 : -6599)))) > (((min(1, 245))))));
        arr_7 [i_1] = ((((var_0 > -1843272859689068153) > (arr_5 [i_1] [i_1]))));
        arr_8 [i_1] = ((~(arr_2 [i_1])));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                var_16 = (((18446744073709551615 - var_12) ? 3095 : ((((arr_2 [i_2]) ? 56 : 3915208802110091384)))));
                /* LoopNest 3 */
                for (int i_4 = 4; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_17 = (max(243, 1080761413));
                                arr_22 [i_2] [6] [i_2] |= ((((arr_13 [i_3]) ? -7775706142961096252 : (((-(arr_2 [16])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
