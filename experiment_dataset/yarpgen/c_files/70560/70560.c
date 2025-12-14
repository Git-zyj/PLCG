/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_12 = ((-1 ? 127 : (((((2983544840488058206 ? (arr_0 [i_0]) : 2983544840488058205))) ? 1223295721 : 2983544840488058206))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_3] [i_0] = var_4;
                        var_13 -= (((((arr_5 [i_2] [i_0 - 1] [i_0 + 3] [i_0 + 1]) && (arr_8 [i_0] [i_1] [4]))) ? (arr_2 [i_2]) : ((~(max(18446744073709551605, (arr_9 [i_3] [i_2] [i_1] [i_0])))))));
                    }
                }
            }
        }
        arr_12 [i_0] = (arr_3 [i_0] [i_0] [i_0]);
    }
    var_14 = ((1223295721 ? ((-8541783475062472838 ? var_0 : (var_10 >= 8541783475062472837))) : (+-1223295721)));
    #pragma endscop
}
