/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= var_0;
    var_12 ^= var_3;

    for (int i_0 = 2; i_0 < 8;i_0 += 1) /* same iter space */
    {
        var_13 = 22;
        var_14 = 27919;
    }
    for (int i_1 = 2; i_1 < 8;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 7;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        arr_14 [6] [i_2] [4] [6] [i_3] = -62;
                        var_15 -= 25013;
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        var_16 = 62047;
                        var_17 -= -4369;
                    }
                    var_18 = -1;
                    var_19 = 14;
                }
            }
        }
        var_20 = (max(var_20, 441263955));
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 9;i_7 += 1)
            {
                {
                    var_21 = -1707791702;
                    arr_21 [i_1] [i_6 + 1] [1] = 65529;
                    arr_22 [i_1] [5] [5] [1] = -5975719790625931432;
                    var_22 = (min(var_22, 19085));
                }
            }
        }
    }
    #pragma endscop
}
