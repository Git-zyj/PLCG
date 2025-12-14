/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 = var_2;
                    var_19 = (((((!3867359424) ? ((((!(-9223372036854775807 - 1))))) : (-9223372036854775807 - 1)))) ? (arr_3 [i_2] [i_0] [4]) : (((((56 ? (-9223372036854775807 - 1) : 17087640186422354897))) ? (arr_6 [i_0] [i_1]) : (max((-9223372036854775807 - 1), (-9223372036854775807 - 1))))));
                }
            }
        }
    }
    var_20 = (min(var_20, ((((((32750 / (-9223372036854775807 - 1))))) ? (var_3 && var_12) : (min(var_10, var_5))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {
                var_21 = ((2147483647 + (((((124 ? 1 : (-2147483647 - 1)))) ? -32752 : (arr_11 [i_3] [i_4] [i_3])))));
                var_22 = ((-((~(!11106)))));
                arr_14 [i_4] [i_4] = (max(((((arr_12 [i_4] [i_4] [i_3]) ? 32767 : 65527))), (((arr_12 [i_4] [i_3] [i_3]) + (arr_8 [i_4])))));
            }
        }
    }
    #pragma endscop
}
