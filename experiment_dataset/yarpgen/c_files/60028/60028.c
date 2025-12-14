/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = ((-((((max(var_12, var_7))) ? var_10 : var_3))));
                var_14 = ((!((((((var_6 / (arr_1 [i_0])))) ? (((arr_4 [i_0] [i_0] [i_1]) ? (arr_3 [i_0] [i_1]) : (arr_3 [i_0] [i_1 + 1]))) : ((min(var_3, (arr_0 [i_1])))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 7;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                var_15 = (max(var_15, ((min((arr_7 [i_2 + 2]), (min(4122070758, -67)))))));
                arr_10 [i_2] [i_2] = (max((arr_1 [i_2 + 2]), (((min(-9223372036854775803, -9223372036854775803)) + (((min(var_12, (arr_0 [i_2])))))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 8;i_5 += 1)
                    {
                        {
                            var_16 = (max(var_16, (((127 | (arr_1 [i_4]))))));
                            arr_16 [i_2] [i_4] [i_5] = (min((((-(arr_8 [i_2] [i_2] [i_5])))), (min(((((((arr_8 [i_3] [i_4] [i_5]) + 2147483647)) >> (-15 + 30)))), var_1))));
                        }
                    }
                }
            }
        }
    }
    var_17 = var_2;
    var_18 = ((((var_2 ? (var_1 > var_4) : ((var_9 ? var_12 : var_9)))) << ((((min(var_0, var_2))) + 23227))));
    #pragma endscop
}
