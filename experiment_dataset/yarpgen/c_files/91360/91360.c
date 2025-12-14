/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 12;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = 1125899906842623;
        var_14 = (min(var_14, 330562281));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_15 *= var_11;
        arr_4 [i_1] [i_1] = var_0;
        var_16 -= var_4;
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 7;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_17 = 330562266;
                                var_18 = -4336754045098878577;
                                var_19 = var_0;
                                arr_15 [i_1] [i_1] [i_2] [i_2] [i_3] [i_1] [8] = var_0;
                            }
                        }
                    }
                    var_20 = var_9;
                    var_21 = (max(var_21, (-127 - 1)));
                    var_22 = var_9;
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 0;i_6 += 1)
    {
        var_23 = 8921898646538745102;
        arr_20 [i_6] = 3964405016;
    }
    #pragma endscop
}
