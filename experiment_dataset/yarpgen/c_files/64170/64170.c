/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = -16;
                arr_6 [i_0] [i_0] = ((-((min(var_10, var_11)))));
                var_20 *= (((arr_3 [i_0]) ? ((~(arr_3 [i_1]))) : (arr_0 [i_1])));
                var_21 = 2147483647;
            }
        }
    }
    var_22 = ((var_14 + (((var_2 + var_11) ? var_12 : ((var_5 ? var_2 : var_10))))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    var_23 ^= (var_5 == (max((arr_9 [i_3 + 1]), (((var_3 ? var_3 : 0))))));
                    arr_16 [i_2] [i_2] = ((!((((arr_15 [i_2] [i_2] [i_3] [i_2]) ? (var_4 < -2147483647) : 114)))));
                    var_24 *= (((max((arr_15 [i_3 + 1] [i_4] [i_4] [i_3]), (arr_15 [i_3 + 1] [i_4] [i_4] [14])))) ? ((max(var_4, (arr_15 [i_3 + 1] [i_4] [i_4] [i_3 + 1])))) : var_18);
                    var_25 = ((var_12 + ((((8407 ? var_17 : var_17)) ^ (((2147483647 ? 32752 : var_1)))))));
                }
            }
        }
    }
    #pragma endscop
}
