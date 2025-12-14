/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 = (min((min(((max(102, 2097151))), var_8)), ((min((!11), (arr_2 [i_2]))))));
                    var_15 += (min((min(4398046510592, 14064800561929763880)), ((min((arr_0 [i_0 + 2]), var_0)))));

                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        var_16 = (max(-2909560026, ((min(-2026894398, 42)))));
                        var_17 *= ((-(max(var_0, (arr_6 [i_2] [i_3 + 3] [i_3 - 1] [i_3 + 1])))));
                    }
                    for (int i_4 = 2; i_4 < 14;i_4 += 1)
                    {
                        arr_12 [i_4 + 3] [i_2] [i_0 - 1] &= ((~((max((arr_11 [i_4 - 1] [i_4 + 3] [i_4 + 3] [i_1 + 1] [i_0 + 1]), (arr_11 [i_4 - 2] [i_2] [i_2] [i_1 - 1] [i_0 + 1]))))));
                        var_18 &= ((~(min(1, (arr_8 [i_1 - 1] [i_0 + 2])))));
                        var_19 &= (max(36287, 0));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {
            {
                var_20 = (max(var_20, ((max((~var_7), ((min((arr_11 [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 - 2]), (max(37136, 58937))))))))));
                var_21 = (max(var_21, (!-102)));
                var_22 |= (min(6599, (max(var_7, (max(var_1, var_8))))));
            }
        }
    }
    #pragma endscop
}
