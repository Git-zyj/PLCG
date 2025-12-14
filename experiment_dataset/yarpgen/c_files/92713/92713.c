/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += (((var_16 && var_3) != (min(72057594037927935, var_11))));
    var_18 = (min((((18374686479671623700 ? var_11 : (var_2 == 72057594037927915)))), (min(((max(var_14, 98))), (0 + 72057594037927911)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 *= ((((~(((((arr_7 [i_0] [i_1] [i_1]) + 9223372036854775807)) << (65526 - 65526))))) >= ((((arr_2 [0]) ? (arr_9 [i_0] [i_1] [i_2] [i_2]) : (arr_6 [i_0] [i_1] [i_1]))))));
                    var_20 += (max(var_5, (((((-(arr_6 [i_0] [i_2] [i_2])))) ? ((((arr_3 [i_0]) ? (arr_5 [i_1] [i_1]) : var_8))) : ((18374686479671623700 ? (arr_1 [i_0] [i_1]) : -7))))));
                    var_21 = (arr_2 [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
