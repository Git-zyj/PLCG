/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_7 || 123059189) || ((min(var_12, var_13))))) ? var_1 : var_0);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] [i_1] [i_2] &= (+(((arr_1 [i_0 + 1]) ? -65380304 : (arr_1 [i_0 - 1]))));
                    var_16 = var_9;
                    arr_8 [i_0] [i_1 + 1] [i_2] [i_2] |= (((((((123059189 * (arr_1 [i_1])))) ? ((min((arr_4 [i_1]), (arr_4 [i_2])))) : (!-123059189)))) + ((~(-6558942566004411977 & 29897))));
                    arr_9 [i_0] [i_0] [i_0] [i_2] = (min(123059195, ((-123059187 ? (arr_0 [i_0 - 1]) : var_10))));
                }
            }
        }
    }
    #pragma endscop
}
