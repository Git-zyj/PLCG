/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] [i_0] = ((-((min((max(var_2, -119)), ((max(68, (arr_5 [i_0] [i_0])))))))));
                arr_7 [i_1] [i_1] [i_0] = (min(-var_9, 1814623341));
                var_16 = (max((!-116), ((-(arr_0 [15])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 4; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    var_17 = (~-114);
                    arr_14 [i_2] &= var_7;
                    var_18 = (((arr_5 [i_4] [19]) - (arr_11 [i_3])));
                }
            }
        }
    }
    var_19 -= var_9;
    var_20 = ((var_8 ? var_10 : (var_15 <= var_7)));
    #pragma endscop
}
