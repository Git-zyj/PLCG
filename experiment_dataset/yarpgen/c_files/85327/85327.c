/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= ((var_4 ? var_10 : var_15));
    var_21 = min(((~(((-127 - 1) ? var_10 : 15977643323662886149)))), var_12);
    var_22 = (((((-42 ? (var_3 & var_4) : (!var_17)))) ? (((var_10 & 79) ? 124 : var_13)) : ((min(((var_10 ? -28159 : var_17)), var_6)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((((max((arr_4 [i_1]), (arr_4 [i_1])))) ? ((~(!33))) : 57));
                    var_23 = (((((((arr_0 [i_2 + 4]) + 2147483647)) << ((((-127 ? 222 : -39)) - 222))))) ? (!26025) : ((-93 ? -26025 : 10533753490475524009)));
                    var_24 = 106;
                }
            }
        }
    }
    #pragma endscop
}
