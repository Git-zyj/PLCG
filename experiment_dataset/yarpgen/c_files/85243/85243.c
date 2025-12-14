/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] = ((!(((var_4 ? 3971551556422095409 : (((min((arr_5 [i_1]), var_7)))))))));
                    var_14 = ((~((min(173, -32747)))));
                }
            }
        }
    }
    var_15 = (~7528);
    var_16 -= var_8;
    var_17 |= ((var_10 ^ (var_4 / var_3)));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    var_18 = ((-(((((-7528 ? (arr_11 [i_3]) : (arr_11 [i_3])))) - (var_1 / 9223372036854775807)))));
                    var_19 = -2448388184992882640;
                }
            }
        }
    }
    #pragma endscop
}
