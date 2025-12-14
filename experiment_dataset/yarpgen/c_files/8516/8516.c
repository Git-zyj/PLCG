/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((-((var_16 ? -123 : var_11)))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_20 = (arr_1 [i_0]);
        var_21 &= (arr_0 [i_0 - 1] [i_0 - 1]);
    }
    for (int i_1 = 4; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (-1758709178 <= -33521664);
        arr_7 [i_1] = (((32 ? -30462 : 33521651)));
        arr_8 [i_1] = (i_1 % 2 == 0) ? ((((-6018949818071811333 + 9223372036854775807) >> (((arr_1 [i_1]) - 89))))) : ((((-6018949818071811333 + 9223372036854775807) >> (((((arr_1 [i_1]) - 89)) - 77)))));
    }
    for (int i_2 = 4; i_2 < 14;i_2 += 1) /* same iter space */
    {
        var_22 -= arr_2 [i_2 - 4];
        arr_13 [i_2] = (!-var_0);
    }
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    var_23 ^= ((~(~var_7)));
                    var_24 = (max(var_24, ((((((~(arr_19 [i_3] [i_3 + 2] [i_3])))) ? (arr_19 [10] [1] [i_5]) : (21484 | var_9))))));
                }
            }
        }
    }
    #pragma endscop
}
