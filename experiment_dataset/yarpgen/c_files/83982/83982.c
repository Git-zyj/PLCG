/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    var_11 = (((-32761 * -1368345713) & (-1368345691 / 7146140552894725883)));
    var_12 = ((var_1 | ((-(var_1 * var_4)))));
    var_13 *= var_3;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 = ((-((18446744056529682432 ? 17276 : 65535))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    {
                        var_15 = (var_7 ? ((~(arr_9 [i_0] [i_1] [i_2 - 2] [i_2 - 2] [i_3 + 1]))) : ((((var_2 ? var_1 : (arr_6 [i_1] [i_1] [8]))))));
                        arr_12 [6] [i_1] [i_2] [i_1] = ((2535892084771834813 ? (arr_9 [i_3] [i_0] [i_0] [i_0] [i_0]) : (~255)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
