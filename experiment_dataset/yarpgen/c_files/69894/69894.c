/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [i_1] = (((~1) ? (((((~(arr_0 [i_0]))) + ((15360 ? var_10 : 167))))) : ((-32757 ? 81 : 3901464910))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_13 ^= 2146959360;
                            arr_12 [i_0] [i_1] [i_1] [i_1] = (((((((min((arr_2 [i_2] [i_2]), (arr_8 [i_1])))) ? ((var_6 ? var_5 : (arr_3 [i_0]))) : ((-14224 ? 1552128999 : 141))))) ? var_1 : (min(109, (arr_9 [i_1] [i_1] [i_1])))));
                        }
                    }
                }
                var_14 = ((((min((arr_4 [i_1 + 2] [i_1 + 2] [i_1 + 2]), var_10))) ? (arr_3 [i_1]) : (arr_4 [i_0] [i_1 - 1] [i_0])));
                var_15 = (max(var_15, (((((min((arr_11 [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1]), (arr_2 [i_1 + 1] [i_1 + 2])))) ? (arr_10 [i_0] [i_0]) : (((min((arr_3 [i_1 - 1]), var_6)))))))));
                var_16 = (max(var_16, (~-119)));
            }
        }
    }
    var_17 -= var_11;
    #pragma endscop
}
