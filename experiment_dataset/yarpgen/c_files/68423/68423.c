/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = (max(var_19, ((max((((arr_4 [i_1]) & (0 | 121))), 1)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_20 |= (((max(2147483644, (arr_9 [i_3] [13] [16] [i_3 + 2])))) ? 1 : (((arr_9 [i_3] [i_3] [i_3] [i_3 - 1]) ? (arr_9 [i_3 + 1] [i_3] [7] [i_3 - 2]) : var_18)));
                            var_21 = (((((-2 == (max(var_12, (arr_9 [i_3 - 2] [i_2] [i_0] [i_0])))))) >= -3));
                            var_22 -= (max((((arr_9 [i_3 - 1] [i_3 - 2] [i_3 - 2] [i_3 + 2]) ? (arr_9 [i_3 + 1] [i_3] [i_3 + 1] [i_3]) : (arr_9 [i_3 - 2] [i_3] [i_3 + 1] [i_3 + 1]))), ((18446744073709551595 ? ((25165824 ? (arr_1 [i_0]) : (arr_4 [i_3 + 1]))) : ((min(var_11, var_15)))))));
                            var_23 *= (((((max((arr_8 [i_0] [i_1]), var_12)))) * (((var_12 ? 2 : 134217727)))));
                        }
                    }
                }
            }
        }
    }
    var_24 ^= (min(0, var_5));
    #pragma endscop
}
