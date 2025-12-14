/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            var_13 = 11527;
            var_14 &= 274877906943;
        }
        var_15 ^= 1;
        var_16 -= 32765;
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_17 = -20;
        var_18 = 12506042546123042931;
    }
    var_19 = (min(var_19, var_3));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_20 = 1048575;
                                arr_22 [i_4] = 46550;
                                var_21 = 11527;
                            }
                        }
                    }
                }
                var_22 = 229;
            }
        }
    }
    #pragma endscop
}
